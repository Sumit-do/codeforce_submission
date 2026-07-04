#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
   int n;
   ll a,b;
   cin>>n>>a>>b;
   vector<ll> vec(n);
   ll g = __gcd(a,b);
   for(int i=0;i<n;i++) cin>>vec[i];
   ll minn = LLONG_MAX,maxx = LLONG_MIN,minn1=LLONG_MAX,maxx1=LLONG_MIN;
   vector<ll> store;
   for(int i=0;i<n;i++){
       store.push_back(vec[i]%g);
   }
   sort(store.begin(),store.end());
   ll res = INT_MAX;
   for(int i=0;i<n;i++){
       res = min(res,store[i+n-1]-store[i]);
       store.push_back(store[i]+g);
   }
   cout<<res<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}