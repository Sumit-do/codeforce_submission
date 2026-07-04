#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n;
    ll ax, ay, bx, by;
    if (!(cin >> n >> ax >> ay >> bx >> by)) return;
 
    
    map<int, pair<ll, ll>> columns;
    vector<int> x_coords(n);
    for (int i = 0; i < n; i++) cin >> x_coords[i];
    for (int i = 0; i < n; i++) {
        ll y;
        cin >> y;
        int x = x_coords[i];
        if (columns.find(x) == columns.end()) {
            columns[x] = {y, y};
        } else {
            columns[x].first = max(columns[x].first, y);  
            columns[x].second = min(columns[x].second, y); 
        }
    }
 
    
    map<int, ll> dp0, dp1;
 
    auto it = columns.begin();
    while (it != columns.end()) {
        int x = it->first;
        ll cur_max = it->second.first;
        ll cur_min = it->second.second;
        ll vertical_span = cur_max - cur_min;
 
        if (it == columns.begin()) {
            
            dp0[x] = abs(ay - cur_min) + vertical_span;
            dp1[x] = abs(ay - cur_max) + vertical_span;
        } else {
            auto prev_it = prev(it);
            int px = prev_it->first;
            ll p_max = prev_it->second.first;
            ll p_min = prev_it->second.second;
 
            
            dp0[x] = vertical_span + min(dp0[px] + abs(p_max - cur_min), 
                                         dp1[px] + abs(p_min - cur_min));
 
            
            dp1[x] = vertical_span + min(dp0[px] + abs(p_max - cur_max), 
                                         dp1[px] + abs(p_min - cur_max));
        }
        it++;
    }
 
    
    auto last_it = prev(columns.end());
    int lx = last_it->first;
    ll l_max = last_it->second.first;
    ll l_min = last_it->second.second;
 
    ll min_y_dist = min(dp0[lx] + abs(l_max - by), dp1[lx] + abs(l_min - by));
    ll total_dist = (bx - ax) + min_y_dist;
 
    cout << total_dist << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}