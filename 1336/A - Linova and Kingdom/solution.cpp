#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
vector<vector<int>> adj(2e5+1);
vector<bool> visited(2e5+1);
vector<int> depth(2e5+1,0);
vector<int> sz(2e5+1,0);
void dfs_d(int v,int pa){
    if(visited[v])return;
    visited[v]=true;
    for(auto it:adj[v]){
        if(it==pa)continue;
        depth[it]=depth[v]+1;
        dfs_d(it,v);
    }
}
 
void dfs_s(int v,int pa){
    if(visited[v])return;
    visited[v]=true;
    for(auto it:adj[v]){
        if(it==pa)continue;
        dfs_s(it,v);
        sz[v]+=sz[it];
    }
    sz[v]++;
}
 
void dfs(int v,int pa,vector<int>& res){
    if(visited[v])return;
    visited[v]=true;
    int ty=depth[v]-sz[v]+1;
    res.push_back(ty);
    for(auto it:adj[v]){
        if(it==pa)continue;
        dfs(it,v,res);
    }
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    fr(i,n-1){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //depth[1]=0;
    dfs_d(1,0);
    fill(visited.begin(), visited.end(), false);
    dfs_s(1,0);
    fill(visited.begin(), visited.end(), false);
    vector<int> ress;
    dfs(1,0,ress);
    sort(ress.begin(),ress.end(),greater<int> ());
    ll ans=0;
    fr(i,k){
        ans += ress[i];
    }
    cout<<ans<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    //cin >> t;
    while (t--) solve();
}