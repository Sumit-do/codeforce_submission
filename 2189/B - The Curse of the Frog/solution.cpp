#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
void solve() {
    int n;
    cin>>n;
    ll x;
    cin>>x;
    ll r=x,ma=LLONG_MIN;
    fr(i,n){
        ll a,b,c;
        cin>>a>>b>>c;
        r -= a*(b-1);
        ma = max(ma,a*b-c);
    }
    if(r<=0)return void(cout<<0<<endl);
    if(ma<=0) return void(cout<<-1<<endl);
    ll ans = r/ma;
    if(r%ma!=0)ans++;
    cout<<ans<<endl;
}
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}