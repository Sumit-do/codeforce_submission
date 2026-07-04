#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<double> vec(n);
    fr(i,n)cin>>vec[i];
    vector<int> dp(n);
    dp[n-1]=0;
    for(int i=n-2;i>=0;i--){
        if((vec[i]/vec[i+1])<2)dp[i]=1+dp[i+1];
        else dp[i]=0;
    }
    int ans = 0;
    fr(i,n){
        if(dp[i]>=k)ans++;
    }
    cout<<ans<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}