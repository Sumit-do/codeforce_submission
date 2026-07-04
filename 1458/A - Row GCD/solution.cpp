#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    fr(i,n)cin>>a[i];
    fr(i,m)cin>>b[i];
    ll g_a;
    if(n!=1)g_a=a[1]-a[0];
    else {
        fr(i,m)cout<<b[i]+a[0]<<' ';
        cout<<endl;
        return;
    }
    for(int i=1;i<n;i++)g_a=__gcd(g_a,abs(a[i]-a[i-1]));
    fr(i,m){
        cout<<__gcd(g_a,a[0]+b[i])<<" ";
    }
    cout<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    //cin >> t;
    while (t--) solve();
}