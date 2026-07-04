#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
bool is(ll la,vector<ll>& vec,ll k,ll ans){
    if(la<=ans)return true;
    fr(i,vec.size()){
        //if ans>=l then yes;
        //if(vec[i]>l)continue;
        ll c =vec[i];
        ll kk=k;
        ll l=la;
        kk-=(l-c);
        bool flag = false;
        l--;
        for(int j=i+1;j<vec.size();j++){
            if(l<=vec[j]){
                flag = true;
                break;
            }
            kk -= (l-vec[j]);
            l--;
        }
        if(flag && kk>=0) {
            return true;
            cout<<i<<" "<<l<<endl;
        }
    }
    //cout<<"dsfsd"<<endl;
    return false;
}
 
 
void solve(){
   int n,k;
   cin>>n>>k;
   vector<ll> vec(n);
   fr(i,n)cin>>vec[i];
   ll ans = LLONG_MIN;
   fr(i,n)ans=max(ans,vec[i]);
   /*fr(i,n){
        ll oo=vec[i];
        ll kk=k;
        for(int j=i-1;j>=0 && vec[j]<=oo ;j--){
            oo++;
            kk-=(oo-vec[j]);
            if(kk<0)break;
            ans=max(ans,oo);
            //cout<<oo<<" "<<k<<" "<<ans<<endl;
        }
    }*/
 
    //checking for lambda could be acheivedd through k points??
    ///
    ll i=0,j=1e15;
    ll ans1=0;
    while(i<=j){
        ll mid = i + (j-i)/2;
        if(is(mid,vec,k,ans)){
            ans1 = mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    cout<<ans1<<endl;
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    cout<<endl;
    return 0;
}