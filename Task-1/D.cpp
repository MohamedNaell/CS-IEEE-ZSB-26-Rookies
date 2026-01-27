<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
=======
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
