#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int> (m));
    fr(i,n){
        fr(j,m){
            cin>>mat[i][j];
        }
    }
    int x=-1,y=-1;
    int curr=INT32_MIN;
    fr(i,n){
        fr(j,m){
            curr = max(curr,mat[i][j]);
            if(mat[i][j]==curr){
                x=i+1;
                y=j+1;
            }
        }
    }
    ll ans = max(n-x+1,x)*(ll)max(m-y+1,y);
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}