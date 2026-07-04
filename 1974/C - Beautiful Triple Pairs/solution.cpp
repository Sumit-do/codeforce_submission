#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    map<pair<int,int>,ll> f_1,f_2,f_3;
    map<pair<int,pair<int,int>>,ll> mpp;
    ll ans=0;
    fr(i,n-2){
        int a=vec[i],b=vec[i+1],c=vec[i+2];
        ans+=f_1[{b,c}]++;
        ans+=f_2[{a,c}]++;
        ans+=f_3[{a,b}]++;
        ans-=3*mpp[{a,{b,c}}]++;
    }
    cout<<ans<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}