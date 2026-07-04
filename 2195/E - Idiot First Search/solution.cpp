#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
vector<vector<int>> adj(3e5+5);
vector<ll> state(3e5+5,0);
vector<ll> steps(3e5+5,0);
void dfs1(int v,int p){
    state[v]=0;
    for(auto it:adj[v]){
        if(it==p)continue;
        dfs1(it,v);
        state[v]+=2;
        state[v]+=state[it];
        state[v]%=((ll)1e9+7);
    }
 
}
void dfs2(int v,int p){
    steps[v]=steps[p]+state[v]+1;
    steps[v]%=((ll)1e9+7);
    for(auto it:adj[v]){
        if(it==p)continue;
        dfs2(it,v);
    }
}
void solve(){
    int n;
    cin>>n;
    adj.assign(n + 5, vector<int>());
    state.assign(n + 5, 0);
    steps.assign(n + 5, 0);
    fr(i,n){
        int a,b;
        cin>>a>>b;
        if(!(a==0 && b==0)){
            adj[i+1].push_back(a);
            adj[a].push_back(i+1);
            adj[i+1].push_back(b);
            adj[b].push_back(i+1);
        }
    }
    adj[0].push_back(1);
    adj[1].push_back(0);
    dfs1(1,0);
    //dfs2(1,0);
    for(auto it:adj[0]){
        //if(it!=1){
            steps[it]=state[it]+1;
            dfs2(it,0);
        //}
    }
    for(int i=1;i<=n;i++)cout<<steps[i]<<" ";
    cout<<endl;
}
 
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}