#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int n;
    cin>>n;
    vector<ll>a(n),b(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    vector<vector<ll>> dp(n,vector<ll>(2,0));
    dp[0][0]=1;
    dp[0][1]=1;
    fr(i,n-1){
        ll a1=a[i],b1=b[i],a2=a[i+1],b2=b[i+1];
        if(a1<=a2 && b1<=b2){
            dp[i+1][0]+=dp[i][0];
            dp[i+1][1]+=dp[i][1];
        }
        if(a1<=b2 && b1<=a2){
            dp[i+1][0]+=dp[i][1];
            dp[i+1][1]+=dp[i][0];
        }
        dp[i+1][0]%=998244353;
        dp[i+1][1]%=998244353;
    }
    cout<<(dp[n-1][0]+dp[n-1][1])%(998244353)<<endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}