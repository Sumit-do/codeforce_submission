#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    vector<ll> dp1(n),dp2(n);
    fr(i,n){
        cin>>a[i];
    }
    dp1[0]=a[0];
    dp2[n-1]=a[n-1];
    fr(i,n){
        cin>>b[i];
        //maxx_b=max(maxx_b,b[i]);
    }
    for(int i=1;i<n;i++){
        if(dp1[i-1]>0)dp1[i]=dp1[i-1]+a[i];
        else dp1[i]=a[i];
    }
    for(int i=n-2;i>=0;i--){
        if(dp2[i+1]>0)dp2[i]=dp2[i+1]+a[i];
        else dp2[i]=a[i];
    }
    if(k%2==0){
        ll ans = LLONG_MIN;
        fr(i,n){
            ans = max(ans,dp1[i]+dp2[i]-a[i]);
        }
        return void(cout<<ans<<endl);
    }
    ll ans = LLONG_MIN;
        fr(i,n){
            ans = max(ans,dp1[i]+dp2[i]-a[i]+b[i]);
        }
        return void(cout<<ans<<endl);
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}