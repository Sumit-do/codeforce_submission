#include<bits/stdc++.h>
using namespace std;
 
// No need for 'g' or 'x' functions anymore
#define ll long long
 
long long g(long long x){
    if(x<0) return (-1)*x;
    return x;
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    if(k==2){
        long long ans =0;
        sort(vec.begin(),vec.end());
        ans = vec[0];
        for(int i=0;i<n;i++){
           // int j = n-1;
            for(int j=n-1;j>i;j--){
                auto it = lower_bound(vec.begin(),vec.end(),(vec[j]-vec[i]));
                ans = min(ans,g(vec[j]-vec[i]));
                if(it!=(vec.end())){
                    long long x = *it;
                    ans = min(ans,g(x-(vec[j]-vec[i])));
                }
                if(it!=vec.begin()){
                    //ll x = it--;
                    it--;
                    ll x = *it;
                    ans = min(ans,g(x-(vec[j]-vec[i])));
                }
            }
        }
        cout<<ans<<endl;
    }
    else{
        long long ans =0;
        sort(vec.begin(),vec.end());
        ans = vec[0];
        for(int i=0;i<(n-1);i++){
            ans = min(ans ,vec[i+1]-vec[i]);
        }
        cout<<ans<<endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}