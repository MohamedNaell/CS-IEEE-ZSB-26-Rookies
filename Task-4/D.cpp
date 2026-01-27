#include <iostream>
#include <iomanip>
using namespace std;

int target = 0, ways = 0, total = 0;

void solve(string &s, int i, int pos) {
    if (i == s.size()) {
        total++;
        if (pos == target) ways++;
        return;
    }
    if (s[i] == '+')
        solve(s, i + 1, pos + 1);
    else if (s[i] == '-')
        solve(s, i + 1, pos - 1);
    else {
        solve(s, i + 1, pos + 1);
        solve(s, i + 1, pos - 1);
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (char c : s1)
        target += (c == '+') ? 1 : -1;

    solve(s2, 0, 0);

    cout << fixed << setprecision(12) << (double)ways / total;
    return 0;
}
