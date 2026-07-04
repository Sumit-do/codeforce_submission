#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
bool cat(pair<int,int> a,pair<int,int> b){
    if(a.first<b.first)return true;
    if(a.first==b.first && a.second<b.second)return true;
    return false;
}
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    vector<pair<int,int>> mpp;
    ll ans = 0;
    fr(i,n){
        ans += max(a[i],b[i]) - min(a[i],b[i]);
        mpp.push_back({min(a[i],b[i]),max(a[i],b[i])});
    }
    sort(mpp.begin(),mpp.end(),cat);
    ll to_add = LLONG_MAX;
    for(int i=1;i<mpp.size();i++){
        int l = mpp[i-1].second;
        int r = mpp[i].first;
        //cout<<r<<" "<<l<<endl;
        to_add = min(to_add,2*((ll)r-l));
       // if(to_add==((ll)r-l)) to_add += 
        //cout<<to_add<<endl;
    }
    //cout<<ans<<endl;
    if(to_add<=0)cout<<ans<<endl;
    else cout<<ans + to_add<<endl;
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