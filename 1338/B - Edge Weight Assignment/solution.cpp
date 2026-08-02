#include<bits/stdc++.h>
using namespace std;
 
void dfs(vector<vector<int>>& adj, int v, bool dp[], vector<bool>& visited, int par){
    visited[v] = true;
 
    if(adj[v].size() == 1){
        dp[par] = true;
        return;
    }
 
    for(auto it : adj[v]){
        if(visited[it]) continue;
        dfs(adj, it, dp, visited, 1 - par);
    }
}
 
void solve(){
    int n;
    cin >> n;
 
    vector<vector<int>> adj(n + 1);
 
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    bool dp[2] = {false, false};      
    vector<bool> visited(n + 1, false);
 
    for(int i=1;i<=n;i++){
        if(adj[i].size()>1){
            dfs(adj, i, dp, visited, 0);
            break;
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int t = 0;
        for(auto it : adj[i]){
            if(adj[it].size() == 1)
                t++;
        }
        cnt += max(t - 1, 0);
    }
 
    int mn = dp[0] + dp[1];
    if(mn == 2) mn = 3;
 
    cout << mn << " " << n - 1 - cnt << '
';
}
 
int main(){
    solve();        
    return 0;
}