#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void dfs(ll v,vector<bool>& visited,vector<vector<ll>>& ad,vector<pair<ll,ll>>&vec,vector<vector<ll>>& dp){
    visited[v]=true;
    ll ans1=0,ans2=0;
    for(auto it:ad[v]){
        if(visited[it])continue;
        dfs(it,visited,ad,vec,dp);
        ans1 += max(abs(vec[it].first-vec[v].first)+dp[it][0],abs(vec[it].second - vec[v].first)+dp[it][1]);
        ans2 += max(abs(vec[it].first-vec[v].second)+dp[it][0],abs(vec[it].second - vec[v].second)+dp[it][1]);
    }
    dp[v][0]=ans1;
    dp[v][1]=ans2;
}
 
void solve() {
    int n;
    cin>>n;
    vector<pair<ll,ll>> vec(n+1);
    fr(i,n)cin>>vec[i+1].first>>vec[i+1].second;
    vector<vector<ll>> adj(n+1);
    fr(i,n-1){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> visited(n+1,false);
    vector<vector<ll>> dp(n+1,vector<ll> (2,0));
    dfs(1,visited,adj,vec,dp);
    cout<<max(dp[1][0],dp[1][1])<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}