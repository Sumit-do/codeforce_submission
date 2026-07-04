#include <bits/stdc++.h>
using namespace std;
 
struct DSU {
    vector<int> parent;
    vector<long long> size;
    long long current_ans;
 
    DSU(int n) {
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
        size.assign(n, 1);
        current_ans = 0;
    }
 
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }
 
    long long combinations(long long x) {
        return x * (x - 1) / 2;
    }
 
    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
 
        if (root_i != root_j) {
            current_ans -= combinations(size[root_i]);
            current_ans -= combinations(size[root_j]);
 
            if (size[root_i] < size[root_j])
                swap(root_i, root_j);
 
            parent[root_j] = root_i;
            size[root_i] += size[root_j];
 
            current_ans += combinations(size[root_i]);
        }
    }
};
 
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    vector<vector<int>> buckets(n);
 
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(p[i] - p[i + 1]);
        if (diff < n) {
            buckets[diff].push_back(i);
        }
    }
 
    DSU dsu(n);
    vector<long long> results(n);
 
    for (int k = n - 1; k >= 1; k--) {
        for (int index : buckets[k]) {
            dsu.unite(index, index + 1);
        }
        results[k] = dsu.current_ans;
    }
 
    for (int k = 1; k < n; k++) {
        cout << results[k] << (k == n - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}