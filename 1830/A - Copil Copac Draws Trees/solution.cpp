#include <bits/stdc++.h>
using namespace std;
 
 
void dsf(int s,bool * visited,vector<int>* adj,vector<int> & dp,vector<int> &id,map<pair<int,int>,int>& mpp){
    if(visited[s]) return;
    visited[s]=true;
    for(auto it:adj[s]){
        if(visited[it]) continue;
        if(mpp[{it,s}] >= id[s]){
            dp[it]=dp[s];
            id[it]=mpp[{it,s}];
        }
        else{
            dp[it]=dp[s]+1;
            id[it]=mpp[{it,s}];
        }
        dsf(it,visited,adj,dp,id,mpp);
    }
}
 
 
void solve(){
    int n;
    cin>>n;
    map<pair<int,int>,int> mpp;
    vector<int> adj[n+1];
    bool visited[n+1]={false};
    for(int i=0;i<(n-1);i++){
        int a,b;
        cin>>a>>b;
        mpp[{a,b}]=i+1;
        mpp[{b,a}]=i+1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> dp(n+1),id(n+1);
    dp[1]=1;
    id[1]=0;
    dsf(1,visited,adj,dp,id,mpp);
    int ans = -5;
    for(int i=1;i<=n;i++){
        ans = max(ans,dp[i]);
    }
    cout<<ans<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}