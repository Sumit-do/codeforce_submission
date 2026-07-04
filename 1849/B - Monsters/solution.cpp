#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % k == 0) a[i] = k;
        else a[i] %= k;
    }
 
    vector<int> b = a;
    sort(b.begin(), b.end(), greater<int>());
 
    // store indices of each value in original array a
    unordered_map<int, queue<int>> idx;
    for (int i = 0; i < n; i++) {
        idx[a[i]].push(i);
    }
 
    // iterate on sorted array b
    for (int i = 0; i < n; i++) {
        int val = b[i];
        cout << idx[val].front() + 1 << " ";
        idx[val].pop();
    }
    cout << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}