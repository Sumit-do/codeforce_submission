#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<int> dp(n);
    dp[n-1]=1;
    for(int i=n-2;i>=0;i--){
        int a = vec[i]+1;
        if(i+a >n ) dp[i]=dp[i+1]+1;
        else if(i+a==n)dp[i]=0;
        else{
            dp[i]=min(dp[i+a],dp[i+1]+1);
        }
    }
    cout<<dp[0]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l=1,r=2e5;
    //cin>>l>>r;
    
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}