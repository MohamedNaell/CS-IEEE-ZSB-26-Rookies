#include <iostream>
using namespace std;

string smaller_string(int a, int b) {
    string s1(b, '0'+a);
    string s2(a, '0'+b);
    return (s1 < s2 ? s1 : s2);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << smaller_string(a, b);
}
