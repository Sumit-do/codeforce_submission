#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<ll> sum(n);
    sum[0]=vec[0];
    for(int i=1;i<n;i++)sum[i]=sum[i-1]+vec[i];
    fr(i,q){
        int l,r,k;
        cin>>l>>r>>k;
        ll to_add=(ll)k*(r-l+1);
        ll present = sum[r-1]-sum[l-1]+vec[l-1];
        ll diff = to_add - present;
        if(sum[n-1]%2==0){
            if(abs(diff)%2==1)cout<<"YES
";
            else cout<<"NO
";
        }
        else{
            if(abs(diff)%2==1)cout<<"NO
";
            else cout<<"YES
";
        }
    }
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}