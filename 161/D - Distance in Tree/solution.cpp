#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
ll ans=0;
vector<vector<int>> adj(50001);
vector<vector<ll>> no_node(50001,vector<ll> (501,0));
void dfs(int v,int p,int k){
    no_node[v][0]=1;
    for(auto it:adj[v]){
        if(it==p)continue;
        dfs(it,v,k);
        for(int i=0;i<=500;i++){
            if(k-i-1>=0)ans += no_node[v][i]*no_node[it][k-i-1];
        }
        for(int i=500;i>=1;i--){
            no_node[v][i]+=no_node[it][i-1];
        }
    }
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    //for(int i=0;i<=50000;i++)no_node[i][0]=1;
    fr(i,n-1){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //finding root
    dfs(1,0,k);
    //ll ans=0;
    /*for(int i=1;i<=n;i++){
        ans+=no_node[i][k];
        cout<<i<<" "<<no_node[i][k]<<endl;
    }*/
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}