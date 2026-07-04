#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
vector<int> adj[int(2e5) +1];
bool visited[int(2e5)+1]={false};
 
 
 
void solve(){
    int n;
    cin>>n;
    int y,r;
    cin>>y>>r;
    cout<<min(n,y/2+r)<<endl;
}
   
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}