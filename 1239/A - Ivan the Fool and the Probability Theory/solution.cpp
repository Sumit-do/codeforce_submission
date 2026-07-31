#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,m;cin>>n>>m;
    int dp[max(n,m)+1]={0};
    int MOD = 1e9 + 7;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=(max(m,n));i++){
        dp[i]=(dp[i-1])%MOD;
        dp[i]+=(dp[i-2])%MOD;
        dp[i]%=MOD;
    }
    int ans = dp[n];
    ans+=dp[m];
    ans-=1;
    ans%=MOD;
    ans*=2;
    ans%=MOD;
    cout<<ans<<endl;
}
int main(){
    solve();
    return 0;
}