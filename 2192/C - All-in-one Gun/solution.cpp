#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
void solve(){
    ll n,h,k;
    cin>>n>>h>>k;
    vector<ll> vec(n);
    fr(i,n)cin>>vec[i];
    ll sum=0;
    fr(i,n)sum+=vec[i];
    ll floor=h/sum;
    ll ans=0;
    ans+=floor*(n+k);
    if(floor*sum == h) {
        ans-=k;
        return void(cout<<ans<<endl);
    }
    vector<ll> max_in_right(n);
    max_in_right[n-1]=vec[n-1];
    for(int i=n-2;i>=0;i--){
        max_in_right[i]=max(max_in_right[i+1],(ll)vec[i]);
    }
    vector<ll> res(n);
    res[0]=vec[0];
    for(int i=1;i<n;i++){
        res[i]+=res[i-1]+vec[i];
    }
    //fr(i,n){
       // res[i]+=max_in_right[i]-vec[i];
    //}
    ll to_search = h-(floor)*(sum);
    vector<ll> small_left(n);
    small_left[0]=vec[0];
    for(int i=1;i<n;i++){
        small_left[i]=min(small_left[i-1],vec[i]);
    }
    //if(to_search==0)to_search=h;
    //ll ans1=LLONG_MAX;
    //ll ans1=LLONG_MAX;
    fr(i,n-1){
        if((res[i] + max(0LL,max_in_right[i+1]-small_left[i])) >= to_search)return void(cout<<ans+i+1<<endl);
    }
    cout << ans + n << endl;
    //fr(i,n)cout<<res[i]<<" ";
    //cout<<endl;
    //cout<<res[dist-1]<<endl;
    
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}