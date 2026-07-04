#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
//set<long long> seen;
///vector<bool> is_prime(1e7+1,true);
void solve() {
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<ll> left_po(n,0),right_neg(n,0);
    if(vec[0]>=0)left_po[0]=vec[0];
    for(int i=1;i<n;i++){
        if(vec[i]>=0)left_po[i]=left_po[i-1]+vec[i];
        else left_po[i]=left_po[i-1];
    }
    if(vec[n-1]<=0)right_neg[n-1]=vec[n-1];
    for(int i=n-2;i>=0;i--){
        if(vec[i]<=0)right_neg[i]=right_neg[i+1]+vec[i];
        else right_neg[i]=right_neg[i+1];
    }
    ll ans = LLONG_MIN;
    fr(i,n){
        ans = max(ans,left_po[i]-right_neg[i]);
    }
    cout<<ans<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}