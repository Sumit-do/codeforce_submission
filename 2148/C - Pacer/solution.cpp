#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> vec(n);
    fr(i,n)cin>>vec[i].first>>vec[i].second;
    int ans=0,prev=0,prev_stat=0;
    fr(i,n){
        if(!((vec[i].first-prev)%2==(prev_stat+vec[i].second)%2)){
            ans++;
        }
        prev=vec[i].first;
        prev_stat=vec[i].second;
    }
    cout<<m-ans<<endl;
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