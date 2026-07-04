#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve() {
    int n,m,q;
    cin>>n>>m>>q;
    vector<ll> a(n),b(m);
    fr(i,n)cin>>a[i];
    fr(i,m)cin>>b[i];
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    for(int i=1;i<n;i++){
        a[i]=a[i]+a[i-1];
        //b[i]=b[i]+b[i-1];
    }
    for(int i=1;i<m;i++)b[i]=b[i]+b[i-1];
    ll ans=0;
    fr(i,q){
        int x,y,z;
        cin>>x>>y>>z;
        int l=max({0, z - y, z - m}),r=min(z,min(x,n));
        while(r - l > 2) {
            int m1 = l + (r - l) / 3;
            int m2 = r - (r - l) / 3;
            
            ll a1 = (m1 ? a[m1-1] : 0) + ((z-m1) ? b[z-m1-1] : 0);
            ll a2 = (m2 ? a[m2-1] : 0) + ((z-m2) ? b[z-m2-1] : 0);
            
            if(a1 < a2) l = m1; 
            else r = m2; 
        }
 
        ll mx = 0;
        for(int k = l; k <= r; k++) {
            ll cur = (k ? a[k-1] : 0) + ((z-k) ? b[z-k-1] : 0);
            mx = max(mx, cur);
        }
        cout << mx << "
";
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
}