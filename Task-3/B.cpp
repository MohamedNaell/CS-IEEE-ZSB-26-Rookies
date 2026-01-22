#include <iostream>
#include <vector>
using namespace std;

vector<int> restorePicture(int n, int k, vector<int> r) {
    vector<int> y = r;
    int count = 0;
    
    for (int i = 1; i <= 2 * n; i += 2) {
        if (i > 0 && i < 2 * n) {
            int left = y[i - 1];
            int peak = y[i];
            int right = y[i + 1];
            
            if (count < k && peak - 1 > left && peak - 1 > right) {
                y[i] = peak - 1;
                count++;
            }
        }
    }
    
    return y;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> r(2 * n + 1);
    for (int i = 0; i < 2 * n + 1; i++) {
        cin >> r[i];
    }
    
    vector<int> result = restorePicture(n, k, r);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}