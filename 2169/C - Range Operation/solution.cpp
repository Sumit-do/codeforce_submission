#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<ll> pre_sum(n);
    pre_sum[0]=vec[0];
    for(int i=1;i<n;i++){
        pre_sum[i]+=pre_sum[i-1]+vec[i];
    }
    ll l=0;
    ll ans = INT64_MIN;
    for(int i=0;i<n;i++){
        ll ir=i+1;
        ll r = ir*ir +ir -pre_sum[i];
        ll l1 = ir*ir - pre_sum[i]-ir +vec[i];
        l = min(l,l1);
        ans = max(ans,r-l);
       
    }
    cout<<max(pre_sum[n-1],pre_sum[n-1]+ans)<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}