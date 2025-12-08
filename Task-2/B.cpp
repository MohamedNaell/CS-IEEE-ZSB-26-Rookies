#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allUpper = true;
    bool restUpper = true;

    for (char c : s) {
        if (!(c >= 'A' && c <= 'Z')) {
            allUpper = false;
            break;
        }
    }

    if (!(s[0] >= 'a' && s[0] <= 'z')) restUpper = false;
    for (int i = 1; i < s.size(); i++) {
        if (!(s[i] >= 'A' && s[i] <= 'Z')) {
            restUpper = false;
            break;
        }
    }
    if (allUpper || restUpper) {
        for (char &c : s) {
            if (c >= 'a' && c <= 'z')
                c = char(c - 'a' + 'A');
            else
                c = char(c - 'A' + 'a');
        }
    }
    cout << s;
}
