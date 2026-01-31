#include <iostream>
#include <numeric>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long X;
    cin >> X;

    long long a = 1, b = X;
    for (long long i = 1; i * i <= X; i++) {
        if (X % i == 0) {
            long long j = X / i;
            if (gcd(i, j) == 1) {
                a = i;
                b = j;
            }
       }
    }
    cout << a << " " << b << '\n';
}
