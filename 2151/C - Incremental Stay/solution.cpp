#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve() {
    int n;
    cin>>n;
    vector<ll> vec(2*n);
    fr(i,2*n)cin>>vec[i];
    //vector<ll> pre_sum(2*n);
    //pre_sum[0]=vec[0];
    //for(int i=1;i<2*n;i++)pre_sum[i]=pre_sum[i-1]+vec[i];
    vector<ll> alternate(n);
    alternate[n-1]=vec[n]-vec[n-1];
    for(int i=n-2;i>=0;i--){
        alternate[i]=(vec[2*n-1-i]-vec[i])-alternate[i+1];
    }
    ll journey=0;
    for(int i=0;i<n;i++){
        ll to_show = journey;
        to_show += alternate[i];
        //cout<<alternate[i]<<" ";
        cout<<to_show<<" ";
        journey += (vec[2*n-1-i]-vec[i]);
    }
    cout<<endl;
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