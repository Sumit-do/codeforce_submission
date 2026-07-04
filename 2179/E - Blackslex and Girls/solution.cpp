#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
bool check(ll X0, ll Y1, ll L1, ll R1, ll L2, ll R2, ll K, ll M1, ll M2) {
    if (X0 < L1 || X0 > R1 || Y1 < L2 || Y1 > R2) return false;
    if (X0 + Y1 < K) return false;
    if (X0 - Y1 < M1 || X0 - Y1 > M2) return false;
    return true;
}
 
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    vector<ll> p(n);
    ll sum_p0 = 0, sum_p1 = 0, f0 = 0, f1 = 0, cnt0 = 0, cnt1 = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        ll min_winner = (p[i] / 2) + 1;
        if (s[i] == '0') {
            sum_p0 += p[i];
            f0 += min_winner;
            cnt0++;
        } else {
            sum_p1 += p[i];
            f1 += min_winner;
            cnt1++;
        }
    }
 
    ll L1 = f0, R1 = x;
    ll L2 = f1, R2 = y;
    if (cnt0 == 0) L1 = R1 = 0;
    if (cnt1 == 0) L2 = R2 = 0;
 
    ll K = max(y + cnt0, x + cnt1);
    ll M1 = sum_p0 - y;
    ll M2 = x - sum_p1;
 
    if (L1 > R1 || L2 > R2 || M1 > M2) {
        cout << "NO" << endl;
        return;
    }
 
    // Critical points for Y1 to check feasibility
    set<ll> critical;
    critical.insert(L2);
    critical.insert(R2);
    critical.insert(K - L1);
    critical.insert(K - R1);
    critical.insert(L1 - M1);
    critical.insert(R1 - M1);
    critical.insert(L1 - M2);
    critical.insert(R1 - M2);
    critical.insert((K - M1) / 2);
    critical.insert((K - M2) / 2);
 
    for (ll cy : critical) {
        for (ll dy = -1; dy <= 1; dy++) {
            ll ty = cy + dy;
            if (ty < L2 || ty > R2) continue;
            // For a fixed Y1, X0 must satisfy several lower/upper bounds
            ll lowX = max({L1, K - ty, M1 + ty});
            ll highX = min(R1, M2 + ty);
            if (lowX <= highX) {
                cout << "YES" << endl;
                return;
            }
        }
    }
 
    cout << "NO" << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}