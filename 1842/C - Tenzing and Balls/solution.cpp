#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<ll> vec(n);
    fr(i,n)cin>>vec[i];
    vector<ll> dp(n);
    dp[0]=0;
    //map<ll,ll> mpp;
    vector<ll> mpp(2e5+1,INT_MIN);
    mpp[vec[0]]=max(mpp[vec[0]],1LL);
    for(int i=1;i<n;i++){
        //int col=vec[i];
        //dp[i]=dp[i-1];
        dp[i]=max(dp[i-1],mpp[vec[i]]+i);
        mpp[vec[i]]=max(mpp[vec[i]],1LL-i+dp[i-1]);
    }
    cout<<dp[n-1]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l=1,r=2e5;
    //cin>>l>>r;
    
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}