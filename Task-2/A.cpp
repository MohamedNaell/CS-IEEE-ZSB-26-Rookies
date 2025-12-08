#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool seen[26] = {false};
        int distinct = 0;
        for (char c : s) {
            int idx = c - 'A';
            if (!seen[idx]) {
                seen[idx] = true;
                distinct++;
            }
        }
        int result = n + distinct;
        cout << result << '\n';
    }
}
