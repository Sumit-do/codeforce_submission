#include<bits/stdc++.h>
using namespace std;
 
bool is(int i,int x ,int y,vector<vector<int>> & mat){
    int n=mat[0].size();
    for(int j=0;j<n;j++)if((mat[i][j]+x)==(mat[i-1][j]+y))return false;
    return  true;
}
 
void solve(){
    int n;cin>>n;
    vector<vector<int>> mat(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    long long ans=0;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    const long long INF = 4e18;
    vector<vector<long long>> dp(n, vector<long long>(2, INF));
    dp[0][0] = 0;
    dp[0][1] = a[0];
 
    for(int i=1;i<n;i++){
        for(int x=0;x<2;x++){
            for(int y=0;y<2;y++){
                if(is(i,x,y,mat)){
                    if(x==0)dp[i][x]=min(dp[i][x],dp[i-1][y]);
                    else dp[i][x]=min(dp[i][x],dp[i-1][y]+a[i]);
                }
            }
        }
    }
    long long rowAns = min(dp[n-1][0], dp[n-1][1]);
    vector<vector<int>> mat1(n,vector<int> (n));
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++)mat1[j][i]=mat[i][j];
    }
    mat=mat1;
    a=b;
    dp.assign(n, vector<long long>(2, INF));
    dp[0][0]=0;
    dp[0][1]=a[0];
    for(int i=1;i<n;i++){
        for(int x=0;x<2;x++){
            for(int y=0;y<2;y++){
                if(is(i,x,y,mat)){
                    if(dp[i-1][y]==INF) continue;
                    if(x==0)dp[i][x]=min(dp[i][x],dp[i-1][y]);
                    else dp[i][x]=min(dp[i][x],dp[i-1][y]+a[i]);
                }
            }
        }
    }
    long long colAns = min(dp[n-1][0], dp[n-1][1]);
    if(rowAns>=INF || colAns>=INF)
    cout << -1 << "
";
    else
    cout << rowAns + colAns << "
";
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}