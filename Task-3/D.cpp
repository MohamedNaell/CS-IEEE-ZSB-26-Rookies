<<<<<<< HEAD
#include <iostream>
using namespace std;

int num_digits(int N, int K) {
    int count = 0;
    while (N > 0) {
        N /= K;
        count++;
    }
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << num_digits(N, K);
}
=======
#include <iostream>
using namespace std;

int num_digits(int N, int K) {
    int count = 0;
    while (N > 0) {
        N /= K;
        count++;
    }
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << num_digits(N, K);
}
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
