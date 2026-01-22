#include <iostream>
#include <iomanip>
using namespace std;

double calculateBalance(int X, double Y) {
    if (X % 5 == 0 && Y >= X + 0.5) {
        return Y - X - 0.5;
    }
    return Y;
}

int main() {
    int X;
    double Y;
    cin >> X >> Y;
    
    double result = calculateBalance(X, Y);
    
    cout << fixed << setprecision(2) << result;
    
    return 0;
}