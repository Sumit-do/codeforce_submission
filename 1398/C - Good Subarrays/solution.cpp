#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<int> vec(n);
   fr(i,n)vec[i]=(s[i]-'0');
   vector<ll> pre_sum(n);
   pre_sum[0]=vec[0];
   for(int i=1;i<n;i++)pre_sum[i]=pre_sum[i-1]+vec[i];
   map<ll,int> mpp;
   ll ans=0;
   for(int i=n-1;i>=0;i--){
    ll ufo=pre_sum[i]-(i+1)+1-vec[i];
    mpp[pre_sum[i]-(i+1)]++;
    ans += mpp[ufo];
   }
   cout<<ans<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
}