#include<bits/stdc++.h>
using namespace std;
 
#define FLOAT_TYPE long double
#define ll long long
 
 
void dfs(int s,bool * visited,set<int> * adj){
    if(visited[s]) return;
    visited[s]=true;
    for(auto it:adj[s]){
        if(!visited[it]){
            dfs(it,visited,adj);
        }
    }
}
 
 
 
 
void solve(){
    int n;
    cin>>n;
    set<int> adj[n+1];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        adj[a].insert(i);
        adj[i].insert(a);
    }
    int cyclic_comp=0;
    bool visited[n+1]={false};
    int max_num=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            max_num++;
            dfs(i,visited,adj);
            
        }
        if(adj[i].size()==1) cyclic_comp++;
    }
    
    cout<<min((max_num - (cyclic_comp/2) + 1),max_num)<<" "<<max_num<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}