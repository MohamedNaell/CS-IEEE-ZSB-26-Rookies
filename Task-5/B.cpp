#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a = 0, b = 0, c = 0, temp = n;
        for (long long i = 2; i * i <= temp; i++) {
            if (temp % i == 0) {
                a = i;
                temp /= i;
                break;
            }
        }

        if (a == 0) {
            cout << "NO\n";
            continue;
        }
        for (long long i = a + 1; i * i <= temp; i++) {
            if (temp % i == 0) {
                b = i;
                temp /= i;
                break;
       }
        }
        c = temp;
        if (b != 0 && c > 1 && c != a && c != b)
            cout << "YES\n" << a << " " << b << " " << c << "\n";
        else
            cout << "NO\n";
    }
}
