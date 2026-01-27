<<<<<<< HEAD
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool letters[26] = {false};
    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        letters[c - 'a'] = true;
    }
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            isPangram = false;
            break;
        }
    }
    cout << (isPangram ? "YES" : "NO") << endl;
}
=======
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool letters[26] = {false};
    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        letters[c - 'a'] = true;
    }
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            isPangram = false;
            break;
        }
    }
    cout << (isPangram ? "YES" : "NO") << endl;
}
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
