#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n,r;
    cin>>n>>r;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    int ans = 0,f_1=0;
    fr(i,n){
        if(vec[i]%2==0)ans+=vec[i];
        else{
            ans+=vec[i]-1;
            f_1++;
        }
    }
    if(f_1>(r-ans/2)){
        cout<<ans+2*(r-ans/2)-f_1<<endl;
    }
    else cout<<ans+f_1<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}