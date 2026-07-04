#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
bool cat(pair<ll,int> a, pair<ll,int> b){
    if(a.first>b.first) return true;
    return false;
}
 
void solve() {
    int n;
    cin>>n;
    vector<ll> vec(n);
    fr(i,n) cin>>vec[i];
    if(n==1){
        cout<<vec[0]<<endl;
        return ;
    }
    vector<ll> vec1(n);
    ll sum =0;
    fr(i,n){
        if(i&1){
            vec1[i] = (-1)*vec[i];
            sum += vec1[i];
        }
        else{
            vec1[i]=vec[i];
            sum += vec1[i];
        }
    }
    vector<ll> vecneg(n),vecpos(n);
    vector<pair<ll,int>> pairr1,pairr2;
    fr(i,n){
        vecneg[i]=-2*vec1[i]-i;
        vecpos[i]=-2*vec1[i]+i;
        pairr1.push_back({vecneg[i],i});
        pairr2.push_back({vecpos[i],i});
    }
    sort(pairr1.begin(),pairr1.end(),cat);
    sort(pairr2.begin(),pairr2.end(),cat);
    if((pairr1[0].second^pairr2[0].second)&1){
        ll a = pairr1[0].first + pairr2[0].first;
        if(a>0){
            cout<<sum + a <<endl;
            return ;
        }
        cout<<sum<<endl;
        return ;
    }
    int y=0;
    while(y<n && ((pairr1[y].second^pairr2[0].second)&1)==0 ) y++;
    ll a1 = pairr1[y].first + pairr2[0].first;
    y=0;
    while(y<n && ((pairr2[y].second^pairr1[0].second)&1)==0 ) y++;
    ll a2 = pairr1[0].first + pairr2[y].first;
 
 
    ll a = max(a1,a2);
    ll res=0;
    if(n&1){
        res = max(sum+a,sum+(n-1));
    }
    else{
        res = max(sum+a,sum + n-2);
    }
    cout<<res<<endl;
    return ;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}