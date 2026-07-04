#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
vector<int> adj[(int)2e5+1];
bool visited[(int)2e5+1]={false};
 
 
void dfs(int s,vector<ll>&dp,map<int,ll>& mpp,vector<ll>&min_dp){
    for(auto it:adj[s]){
        //dp[it]=max((ll)mpp[it],mpp[it]-dp[s],mpp[it]-min_dp[s]);
        //min_dp[it]=min((ll)mpp[it],mpp[it]-dp[s],mpp[it]-min_dp[s]);
        if(visited[it])continue;
        visited[it]=true;
        dp[it]=mpp[it]-min_dp[s];
        min_dp[it]=min(mpp[it]-dp[s],(ll)0);
        //cout<<dp[it]<<" <--dp "<<it<<" "<<min_dp[it]<<endl;
        dfs(it,dp,mpp,min_dp);
    }
}
 
void solve(){
    
 
    int n;
    cin>>n;
    //vector<int> vec(n);
    for (int i = 0; i <= n; i++) {
        adj[i].clear();
        visited[i] = false;
    }
    map<int,ll> mpp;
    fr(i,n){
        ll a;
        cin>>a;
        mpp[i+1]=a;
    }
    
    fr(i,n-1){
        int a ,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<ll> dp(n+1),min_dp(n+1);
    dp[1]=mpp[1];
    min_dp[1]=0;
    visited[1]=true;
    dfs(1,dp,mpp,min_dp);
    fr(i,n){
        cout<<(ll)dp[i+1]<<" ";
    }
    cout<<endl;
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