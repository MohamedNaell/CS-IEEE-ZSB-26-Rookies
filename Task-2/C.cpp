<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s.back() << "\n";
        } else {
            cout << s << "\n";
        }
    }
    return 0;
}
=======
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s.back() << "\n";
        } else {
            cout << s << "\n";
        }
    }
    return 0;
}
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
