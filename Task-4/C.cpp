#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;
long long total = 0;
long long ans = 1e18;
vector<long long> a;

void solve(int i, long long sum) {
    if (i == n) {
        long long other = total - sum;
        ans = min(ans, llabs(sum - other));
        return;
    }
    solve(i + 1, sum + a[i]);
    solve(i + 1, sum);
}

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    solve(0, 0);
    cout << ans;
    return 0;
}
