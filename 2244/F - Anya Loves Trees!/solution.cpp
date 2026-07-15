#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin>>n;
    vector<vector<int>> adj(n+1,vector<int>());
    vector<int> a(n+1);
    for(int i=2;i<=n;i++){
        int papa;cin>>papa;
        adj[papa].push_back(i);
    }
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<pair<int,int>> aj(n+1,pair<int,int>());
 
    auto dfs = [&](auto&& self, int v) -> void {
        int mn = INT_MAX, mx = INT_MIN;
        for (int it : adj[v]) {
            self(self, it);
            mn = min(mn, aj[it].first);
            mx = max(mx, aj[it].second);
        }
        if(mn==INT_MAX||mx==INT_MIN){
            mn=a[v];
            mx=a[v];
        }
        aj[v] = {mn, mx};
    };
 
    dfs(dfs,1);
 
 
    auto dfs1 = [&](int v){
        vector<int> temp;
        for(auto it:adj[v]){
            temp.push_back(aj[it].first);
            temp.push_back(aj[it].second);
        }
        int c=0;
        int nn=temp.size();
        for(int i=0;i<temp.size();i++){
            int next_idx = (i+1)%nn;
            if(temp[i]>temp[next_idx])c++;
        }
        if(c>1)return false;
        return true;
    };
    for(int i=1;i<=n;i++){
        if(!dfs1(i))return void(cout<<"NO
");
    }
    cout<<"YES
";
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}