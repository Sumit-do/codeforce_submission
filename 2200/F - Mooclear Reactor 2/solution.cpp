#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
 
    vector<vector<long long>> vec(n + 1);
    for (int i = 0; i < n; i++) {
        long long x;
        int y;
        cin >> x >> y;
        vec[y].push_back(x);
    }
 
    priority_queue<long long, vector<long long>, greater<long long>> q;
    long long cur_sum = 0;
    long long ans_base = 0;
 
    vector<long long> P(n + 1, -1);
 
    for (int C = n; C >= 0; C--) {
        for (auto x : vec[C]) {
            q.push(x);
            cur_sum += x;
        }
 
        while ((int)q.size() > C + 1) {
            cur_sum -= q.top();
            q.pop();
        }
        if ((int)q.size() == C + 1) {
            ans_base = max(ans_base, cur_sum);
        }
 
        while ((int)q.size() > C) {
            cur_sum -= q.top();
            q.pop();
        }
        if ((int)q.size() == C) {
            P[C] = cur_sum;
        }
    }
 
    vector<long long> pref(n + 1, 0);
    long long max_p = 0;
    for (int C = 0; C <= n; C++) {
        if (P[C] != -1) {
            max_p = max(max_p, P[C]);
        }
        pref[C] = max_p;
    }
 
    for (int i = 0; i < m; i++) {
        long long x;
        int y;
        cin >> x >> y;
        long long ans = max(ans_base, x + pref[y]);
        cout << ans << (i == m - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}