#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        string s_sorted = s;
        string t_sorted = t;
        sort(s_sorted.begin(), s_sorted.end());
        sort(t_sorted.begin(), t_sorted.end());

        if (s_sorted == t_sorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
