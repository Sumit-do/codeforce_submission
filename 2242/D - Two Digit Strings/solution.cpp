#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    vector<int> sa(n + 1, 0), sb(m + 1, 0);
    for (int i = 0; i < n; ++i) sa[i + 1] = (sa[i] + a[i] - '0') % 10;
    for (int i = 0; i < m; ++i) sb[i + 1] = (sb[i] + b[i] - '0') % 10;
    
    if (sa[n] != sb[m]) {
        cout << -1 << "
";
        return;
    }
    
    vector<vector<int>> M(m + 1, vector<int>(10, -1e9));
    for (int j = 0; j <= m; ++j) M[j][0] = 0;
    
    vector<int> curr(m + 1);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int val = (sa[i] - sb[j] + 10) % 10;
            curr[j] = M[j - 1][val] + 1;
        }
        for (int j = 1; j <= m; ++j) {
            int val = (sa[i] - sb[j] + 10) % 10;
            if (curr[j] > M[j][val]) M[j][val] = curr[j];
            for (int d = 0; d < 10; ++d) {
                if (M[j - 1][d] > M[j][d]) M[j][d] = M[j - 1][d];
            }
        }
    }
    cout << curr[m] << "
";
}
 
int main() {
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}