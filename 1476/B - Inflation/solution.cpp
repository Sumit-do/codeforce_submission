#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<ll> vec(n);
    fr(i, n) cin >> vec[i];
 
    ll current_pre = vec[0];
    ll ans = 0;
    for(int i = 1; i < n; i++){
        ll required_pre = (vec[i] * 100LL + k - 1) / k;
        if (required_pre > current_pre) {
            ans = max(ans, required_pre - current_pre);
        }
        current_pre += vec[i];
    }
    cout << ans << endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}