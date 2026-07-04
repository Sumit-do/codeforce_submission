#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
vector<int> depth(5e5+1,0),depth1(5e5+1,1);
void dfs1(int v,int height,vector<bool> & visited,vector<vector<int>>&adj){
    if(visited[v])return;
    visited[v]=true;
    for(auto it:adj[v]){
        if(visited[it])continue;;
        depth[it]=depth[v]+1;
        dfs1(it,height+1,visited,adj);
    }
}
void dfs3(int v,vector<bool> & visited,vector<vector<int>>&adj){
    if(visited[v])return;
    visited[v]=true;
    for(auto it:adj[v]){
        if(visited[it])continue;
        dfs3(it,visited,adj);
        depth1[v]=max(depth1[v],depth1[it]+1);
    }
}
 
void dfs2(int v,int curse,vector<bool> & visited,vector<vector<int>>&adj,vector<ll> & ans){
    if(visited[v])return;
    visited[v]=true;
    ans[depth[v]]+=(depth[v]-curse);
    int max_one=-1,comp=INT32_MIN;
    for(auto it:adj[v]){
        if(visited[it])continue;
        if(comp<depth1[it]){
            max_one=it;
            comp=depth1[it];
        }
    }
    if(max_one==-1)return;
    for(auto it:adj[v]){
        if(visited[it])continue;
        if(it==max_one){
            dfs2(it,curse,visited,adj,ans);
        }
        else{
            dfs2(it,depth[v],visited,adj,ans);
        }
    }
}
 
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    fr(i,n-1){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0; i<=n; i++) {
        depth[i] = 0;
        depth1[i] = 1;
    }
    vector<bool> visited(n+1,false);
    depth[1]=1;
    dfs1(1,1,visited,adj);
    visited.assign(n+1, false);
    dfs3(1,visited,adj);
    visited.assign(n+1, false);
    //fr(i,n)cout<<depth[i]<<" ";
    //cout<<endl;
    //fr(i,n)cout<<depth1[i]<<" ";
    //cout<<endl;
    vector<ll> ans(n+1,0);
    dfs2(1,0,visited,adj,ans);
    sort(ans.begin(),ans.end(),greater<ll> ());
    //fr(i,n+1)cout<<ans[i]<<" ";
    //cout<<endl;
    cout<<(n-ans[0])<<endl;
}
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
}