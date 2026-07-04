#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int x,n;
    cin>>x>>n;
    if(n%2==0)cout<<0<<endl;
    else cout<<x<<endl;
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