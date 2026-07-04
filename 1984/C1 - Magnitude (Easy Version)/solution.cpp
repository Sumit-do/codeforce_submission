#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
ll g(ll x){
    if(x<0)return -1*x;
    return x;
}
void solve(){
    int n;
    cin>>n;
    vector<ll> vec(n);
    fr(i,n)cin>>vec[i];
    ll dp[n][2];
    dp[0][0]=g(vec[0]);
    dp[0][1]=vec[0];
    for(int i=1;i<n;i++){
        ll maxx = dp[i-1][0],minn=dp[i-1][1];
        ll a = vec[i];
        //dp[i-1][0]+a, dp[i-1][0]-a, dp[i-1][1]+a, dp[i-1][1]-a,
        //max(g(dp[i-1][0]-a),max(dp[i-1][0]+a,max(dp[i-1][1]+a,g(dp[i-1][1]-a))));
        if(a>=0){
            dp[i][0]=max(g(dp[i-1][0]+a),max(dp[i-1][0]+a,max(dp[i-1][1]+a,g(dp[i-1][1]+a))));
            dp[i][1]=min(g(dp[i-1][0]+a),min(dp[i-1][0]+a,min(dp[i-1][1]+a,g(dp[i-1][1]+a))));
        }
        else{
            dp[i][0]=max(g(dp[i-1][0]+a),max(dp[i-1][0]+a,max(dp[i-1][1]+a,g(dp[i-1][1]+a))));
            dp[i][1]=min(g(dp[i-1][0]+a),min(dp[i-1][0]+a,min(dp[i-1][1]+a,g(dp[i-1][1]+a))));
        }
    }
    cout<<dp[n-1][0]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}