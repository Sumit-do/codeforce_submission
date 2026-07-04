#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
#define ll long long int
/*void f(int i,vector<int> &diff,vector<pair<pair<int,int>,int>> mpp){
    int l,r,x;
    l = (mpp[i].first).first;
    r=(mpp[i].first).second;
    x=mpp[i].second;
    diff[l]+=x;
    diff[r+1] -= x;
}*/
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> vec(n);
    fr(i,n){
        cin>>vec[i];
    }
    vector<pair<pair<ll,ll>,ll>> mpp;
    vector<ll> diff(n+1,0);
    fr(i,m){
        ll a,b;
        ll c;
        cin>>a>>b>>c;
        mpp.push_back({{a,b},c});
    }
    vector<ll> diff1(m+1,0);
    fr(i,k){
        ll x,y;
        cin>>x>>y;
        diff1[x-1]+=1;
        diff1[y]-=1;
    }
    for(int i=1;i<m;i++){
        diff1[i] += diff1[i-1];
    }
    for(int i=0;i<m;i++){
        mpp[i].second *= diff1[i];
        diff[(mpp[i].first).first-1] += (mpp[i].second);
        diff[(mpp[i].first).second] -= (mpp[i].second);
    }
    for(int i=1;i<n;i++){
        diff[i]+=diff[i-1];
    }
    fr(i,n){
        vec[i] += diff[i];
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
    solve();
    return 0;
}