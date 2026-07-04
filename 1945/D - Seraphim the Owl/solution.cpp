#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
//typedef long long ll;
 
void solve() {
   int n,m;
   cin>>n>>m;
   vector<ll> a(n),b(n);
   fr(i,n)cin>>a[i];
   fr(i,n)cin>>b[i];
   if(n==1) return void(cout<<a[0]<<endl);
      vector<ll> dp1(n),dp2(n);
   dp1[n-1]=b[n-1];
   dp2[n-1]=a[n-1];
   dp2[n-2]=min(a[n-2]+dp1[n-1],a[n-2]+dp2[n-1]);
   dp1[n-2]=min(min(dp1[n-1],dp2[n-1])+b[n-2],min(dp1[n-1],dp2[n-1])+a[n-2]);
   for(int i=n-3;i>=0;i--){
    dp2[i]=min(a[i]+dp1[i+1],a[i]+dp2[i+1]);
    dp1[i]=min(min(dp1[i+1],dp2[i+1])+b[i],min(dp1[i+1],dp2[i+1])+a[i]);
   }
   ll sol=1e18;
   for(int i=0;i<m;i++)sol=min(sol,dp2[i]);
   cout<<sol<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}