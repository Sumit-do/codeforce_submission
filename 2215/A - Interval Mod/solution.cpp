#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
//hello darling
void solve(){
    int n,k,p,q;
    cin>>n>>k>>p>>q;
    vector<ll> vec(n);
    fr(i,n)cin>>vec[i];
    vector<ll> bs(n),s(n);
    int temp=max(p,q);
    p=min(p,q);
    q=temp;
    fr(i,n){
        bs[i]=(vec[i]%q)%p;
        s[i]=vec[i]%p;
    }
    //vector<ll> bss(n),ss(n);
    vector<ll> bs1(n),s1(n);
 
    vector<ll> real(n);
    fr(i,n)real[i]=min(bs[i],s[i]);
    vector<ll> left(n),right(n);
    left[0]=real[0];right[n-1]=real[n-1];
    for(int i=1;i<n;i++){
        left[i]=left[i-1]+real[i];
    }
    for(int i=n-2;i>=0;i--)right[i]=right[i+1]+real[i];
 
    bs1[0]=bs[0];
    s1[0]=s[0];
    for(int i=1;i<n;i++){
        bs1[i]=bs1[i-1]+bs[i];
        s1[i]=s1[i-1]+s[i];
    }
    ll mma=LLONG_MAX;
    int yi=-1;
    for(int i=0;i+k-1<(n);i++){
        ll bs11=bs1[i+k-1]-bs1[i]+bs[i];
        ll s11=s1[i+k-1]-s1[i]+s[i];
        mma=min(mma,min(bs11,s11));
        if(mma==(min(bs11,s11))){
            yi=i;
        }
    }
    ll ans=LLONG_MAX;
    for(int i=0;i+k-1<n;i++){
        ll bs11=bs1[i+k-1]-bs1[i]+bs[i];
        ll s11=s1[i+k-1]-s1[i]+s[i];
        ll left1=0;
        if(i-1 >=0)left1+=left[i-1];
        ll right1=0;
        if(i+k < n)right1+=right[i+k];
        ans=min(ans,left1+right1+min(bs11,s11));
    }
    cout<<ans<<endl;
}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}