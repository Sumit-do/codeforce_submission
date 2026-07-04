#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    string a,b;
    cin>>a>>b;
    string res;
    cin>>res;
    int n=a.size(),m=b.size();
    int dp[n+1][m+1]={INT32_MAX};
    //ans[i+1][j]= ans[i][j]+is_matching(a[i+1],c[i+j+1])
    //ans[i][j+1]=ans[i][j]+is_match(b[j+1],c[i+j+1])
    dp[0][0]=0;
    //char a1=c[0],b1=c[1];
    for (int i = 0; i < n; i++) {
        dp[i + 1][0] = dp[i][0] + (a[i] != res[i]);
    }
    for (int j = 0; j < m; j++) {
        dp[0][j + 1] = dp[0][j] + (b[j] != res[j]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = std::min(dp[i - 1][j] + (a[i - 1] != res[i + j - 1]),
                                dp[i][j - 1] + (b[j - 1] != res[i + j - 1]));
        }
    }
    cout<<dp[n][m]<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
 