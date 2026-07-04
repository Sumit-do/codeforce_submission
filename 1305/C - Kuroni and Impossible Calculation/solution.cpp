#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> vec(n);
    fr(i,n)cin>>vec[i];
    if(n>m || m==1)return void(cout<<0<<endl);
    ll ans  = 1;
    fr(i,n){
        for(int j=i+1;j<n;j++){
            ans *= (abs(vec[i]-vec[j])%m);
            ans%=m;
        }
    }
    //cout<<ans<<endl;
    cout<<ans%m<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    //cin >> t;
    while (t--) solve();
}