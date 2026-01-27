<<<<<<< HEAD
#include <iostream>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;
    for (int n = 1; ; n++) {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r) {
            cout << n;
            break;
        }
    }
}
=======
#include <iostream>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;
    for (int n = 1; ; n++) {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r) {
            cout << n;
            break;
        }
    }
}
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
