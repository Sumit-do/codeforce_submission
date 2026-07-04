#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int a;
    fr(i,n)cin>>a;
    fr(i,m)cin>>a;
    cout<<n+m<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //int l=1,r=2e5;
    //cin>>l>>r;
    
    //cout<<" "<<endl;
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}