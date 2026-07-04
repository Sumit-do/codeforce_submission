#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string x,y;
    cin>>x>>y;
    int n = x.size();
    int dp[2][(int)x.size()];
    dp[0][0]=(!(y[0]=='0') + !(x[0]=='0'));
    dp[1][0]=(!(y[0]=='1') + !(x[0]=='1'));
    for(int i=1;i<(int)x.size();i++){
        int c_y_0=!(y[i]=='0'),c_y_1=1-c_y_0,c_x_0=!(x[i]=='0'),c_x_1=1-c_x_0;
        dp[0][i]=dp[0][i-1] + c_y_0 + c_x_0;
        dp[0][i]=min(dp[0][i],dp[1][i-1]+c_y_0 + c_x_1);
        dp[1][i]=dp[0][i-1] + c_y_1 + c_x_1;
        dp[1][i]=min(dp[1][i],dp[1][i-1]+c_y_1 + c_x_0);
    }
    cout<<min(dp[0][n-1],dp[1][n-1])<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}