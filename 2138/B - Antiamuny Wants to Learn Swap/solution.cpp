#include <bits/stdc++.h>
using namespace std;
 
const int INF = 1e9;
 
struct SegTree {
    int n;
    vector<int> tree;
 
    SegTree(int n) : n(n), tree(2 * n, INF) {}
 
    void update(int p, int val) {
        for (tree[p += n] = val; p > 1; p >>= 1)
            tree[p >> 1] = min(tree[p], tree[p ^ 1]);
    }
 
    int query(int l, int r) {
        int res = INF;
        if (l > r) return res;
        for (l += n, r += n + 1; l < r; l >>= 1, r >>= 1) {
            if (l & 1) res = min(res, tree[l++]);
            if (r & 1) res = min(res, tree[--r]);
        }
        return res;
    }
};
 
void solve() {
    int n, q;
    cin >> n >> q;
 
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    SegTree st_idx(n + 1), st_K(n + 1);
    vector<int> R(n + 1, INF);
 
    for (int i = n; i >= 1; i--) {
        int val = a[i];
        R[i] = st_K.query(1, val - 1);
        int K_i = st_idx.query(1, val - 1);
        st_K.update(val, K_i);
        st_idx.update(val, i);
    }
 
    vector<int> S(n + 2, INF);
    for (int i = n; i >= 1; i--)
        S[i] = min(S[i + 1], R[i]);
 
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (S[l] <= r)
            cout << "NO
";
        else
            cout << "YES
";
    }
}
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}