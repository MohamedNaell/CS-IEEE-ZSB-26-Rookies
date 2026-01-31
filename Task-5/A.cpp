#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    cin.tie(nullptr);

    const int MAXX = 1000000;

    vector<int> d(MAXX + 1);

    for (int i = 1; i <= MAXX; i++)
        for (int j = i; j <= MAXX; j += i)
            d[j]++;
    int n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        cout << d[x] << '\n';
    }
}
