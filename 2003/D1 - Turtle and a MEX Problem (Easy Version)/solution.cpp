#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int n,m;
    cin>>n>>m;
    int ma=INT32_MIN;
    fr(i,n){
        int l;
        cin>>l;
        map<int,int> mpp;
        fr(j,l){
            int a;
            cin>>a;
            mpp[a]++;
        }
        int curr=0;
        while(mpp.count(curr))curr++;
        //now// for second
        curr++;
        while(mpp.count(curr))curr++;
        ma=max(ma,curr);
    }
    if(ma>=m){
        ll ans = (ll)ma*(m+1);
        cout<<ans<<endl;
    }
    else{
        ll a1=(ll)ma*(ll)(ma+1);
        ll a2=(ll)(m-ma)*(ll)(ma+m+1)/2;
        cout<<a1+a2<<endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}