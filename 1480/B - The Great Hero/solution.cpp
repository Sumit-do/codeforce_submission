#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll> a1(n),b1(n);
    fr(i,n)cin>>a1[i];
    fr(i,n)cin>>b1[i];
    ll healt_to_need=0;
    ll temp_remove=0;
    fr(i,n){
        int t = b1[i]/a;
        if((double)b1[i]/a != b1[i]/a)t++;
        temp_remove=max(a1[i],temp_remove);
        healt_to_need+=t*a1[i];
    }
    if((healt_to_need-temp_remove)<b)return void(cout<<"YES
");
    cout<<"NO
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}