#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n;
    cin>>n;
    vector<ll> vec(2*n);
    fr(i,2*n)cin>>vec[i];
    sort(vec.begin(),vec.end());
    ll p1=0;
    fr(i,n-1)p1+=vec[i];
    ll p2=0;
    for(int i=n-1;i<2*n-1;i++)p2+=vec[i];
    ll p3 = p2-p1 + vec[2*n-1];
    swap(vec[2*n-1],p3);
    
    vector<ll> seq(2*n);
    int y=0;
    for(int i=0;i<n-1;i++){
        seq[y]=vec[i];
        y+=2;
    }
    seq[y]=vec[2*n-1];
    y=1;
    for(int i=n-1;i<2*n-1;i++){
        seq[y]=vec[i];
        y+=2;
    }
    cout<<p3<<" ";
    fr(i,2*n)cout<<seq[i]<<" ";
    cout<<endl;
}
 
int main() {
    fast_io; 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}