#include<bits/stdc++.h>
using namespace std;
typedef vector<vector<vector<int>>> vvvi;
 
bool dfs(int i, long long time, int dir, vvvi& visited,
         vector<long long>& p, vector<long long>& d, vvvi& dp, int k){
    if(d[i]==time) dir = 1-dir;
    if(visited[i][time][dir])
        return dp[i][time][dir];
    visited[i][time][dir]=true;
    if(dir==1){
        if(i==(int)p.size()-1) dp[i][time][dir]=true;
        else{
            long long steps = p[i+1]-p[i];
            dp[i][time][dir] = dfs(i+1,(time+steps)%k,1,visited,p,d,dp,k);
        }
    } else {
        if(i==0) dp[i][time][dir]=true;
        else{
            long long steps = abs(p[i-1]-p[i]);
            dp[i][time][dir] = dfs(i-1,(time+steps)%k,0,visited,p,d,dp,k); 
        }
    }
    return dp[i][time][dir];
}
 
void solve(){
    int n,k; cin>>n>>k;
    vector<long long> p(n),d(n);
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) cin>>d[i];
    vvvi dp(n,vector<vector<int>>(k,vector<int>(2,0)));      
    vvvi visited(n,vector<vector<int>>(k,vector<int>(2,0))); 
    int q; cin>>q;
    while(q--){
        long long a; cin>>a;
        auto it = lower_bound(p.begin(),p.end(),a);
        if(a>p[n-1]){
            cout<<"YES
";
            continue;
        }
        int j = it-p.begin(); 
        long long kaka = p[j]-a;
        cout<<(dfs(j,(kaka)%k,1,visited,p,d,dp,k) ? "YES" : "NO")<<"
";
    }
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}