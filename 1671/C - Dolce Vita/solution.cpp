#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n ,x;
    cin>>n>>x;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    vector<ll> vec1(n,0);
    vec1[0]=vec[0];
    for(int i=1;i<n;i++) vec1[i] += vec1[i-1]+vec[i];
    ll res =0 ;
    for(int i=0;i<n;i++){
      if((x-vec1[i])<0) break;
      ll tem = x- vec1[i];
      tem /= (i+1);
      tem += 1;
      res += tem;
    }
    cout<<res<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}