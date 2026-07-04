#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
void solve() {
    int n,k;
    cin>>n>>k;
    ll dp[k+1][n+1][2]={0};
    fr(i,n+1){
        fr(j,2){
            dp[0][i][j]=0;
            dp[1][i][j]=1;
        }
    }
    for(int i=2;i<=k;i++){
        for(int j=n;j>=0;j--){
            if(j+1<=n)dp[i][j][1]=(dp[i][j+1][1]+dp[i-1][j][0])%(ll)(1e9 + 7);
            else dp[i][j][1]=1;
        }
        for(int j=0;j<=n;j++){
            if(j-1>=0)dp[i][j][0]=(dp[i][j-1][0]+dp[i-1][j][1])%(ll)(1e9 + 7);
            else dp[i][j][0]=1;
        }
    }
    cout<<dp[k][0][1]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}