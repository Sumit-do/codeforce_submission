#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> mat(n,vector<char>(m));
    fr(i,n){
        fr(j,m){
            cin>>mat[i][j];
        }
    }
    vector<vector<ll>> dp(n,vector<ll>(m,0));
    for(int i=n-1;i>=0;i--){
        fr(j,m){
            if(mat[i][j]!='*')continue;
            if(i==n-1){
                if(mat[i][j]=='*')dp[i][j]++;
                continue;
            }
            ll massok=LLONG_MAX;
            if(j>0){
                massok=min(massok,dp[i+1][j-1]);
            }
            if(j<m-1){
                massok=min(massok,dp[i+1][j+1]);
            }
            massok=min(massok,dp[i+1][j]);
            if(j==0 || j==m-1) massok=0;
            dp[i][j]+=1 + massok;
        }
    }
    ll sum=0;
    fr(i,n){
        fr(j,m){
            sum += dp[i][j];
        }
    }
    cout<<sum<<endl;
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