<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--) {
        char c;
        cin >> c;
        bool found = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
           }
    }
}
=======
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--) {
        char c;
        cin >> c;
        bool found = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
           }
    }
}
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
