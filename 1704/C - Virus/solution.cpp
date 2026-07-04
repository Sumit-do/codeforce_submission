#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    ll n, m;
    cin >> n >> m;
 
    vector<ll> vec(m);
    fr(i, m) cin >> vec[i];
 
    // Special case: m == 1
    if (m == 1) {
        cout << 2 << "
";
        return; // perfectly fine now since input fully read
    }
 
    sort(vec.begin(), vec.end());
    vector<ll> dist;
 
    // Wrap-around distance
    ll k = (vec[0] - 1) + (n - vec[m - 1]);
    if (k > 0) dist.push_back(k);
 
    // Distances between consecutive infected houses
    for (int i = 1; i < m; i++) {
        ll d = vec[i] - vec[i - 1] - 1;
        if (d > 0) dist.push_back(d);
    }
 
    // Sort descending to handle largest gaps first
    sort(dist.begin(), dist.end());
    reverse(dist.begin(), dist.end());
 
    ll a = 1;
    ll sum = 0;
 
    for (int i = 0; i < (int)dist.size(); i++) {
        ll available = dist[i] - a;
        if (available < 0) break;   // stop if all remaining are covered
        sum += available;
        if (available == 0) sum++;  // if exactly matched, count one more
        a += 4;
    }
 
    cout << n - sum << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    // Ensure clean input reading for all test cases
    while (t--) {
        solve();
    }
 
    return 0;
}
 