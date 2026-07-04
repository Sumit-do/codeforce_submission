#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 500005;
const int LOG = 20;
int st[MAXN][LOG];
 
void build(int n, const vector<int>& vec) {
    for (int i = 0; i < n; i++) st[i][0] = i;
    for (int j = 1; (1 << j) <= n; j++) {
        for (int i = 0; i + (1 << j) - 1 < n; i++) {
            int left = st[i][j - 1];
            int right = st[i + (1 << (j - 1))][j - 1];
            st[i][j] = (vec[left] >= vec[right]) ? left : right;
        }
    }
}
 
int query(int L, int R, const vector<int>& vec) {
    int j = __lg(R - L + 1);
    int left = st[L][j];
    int right = st[R - (1 << j) + 1][j];
    return (vec[left] >= vec[right]) ? left : right;
}
 
int dp(int i, int j, const vector<int>& vec) {
    if (i > j) return 0;
    if (i == j) return 1;
    int mid = query(i, j, vec);
    return 1 + max(dp(i, mid - 1, vec), dp(mid + 1, j, vec));
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    build(n, vec);
    cout << n - dp(0, n - 1, vec) << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}