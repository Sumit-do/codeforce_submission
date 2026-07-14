#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,q;
    cin>>n>>q;
    string s;cin>>s;
    int dp[n]={0};
    dp[0]=1;
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1];
        if(s[i]==s[i-1])dp[i]++;
    }
 
    for(int i=0;i<q;i++){
        int l,r,k;
        cin>>l>>r>>k;
        int nn = dp[r-1]-dp[l-1]+1;
        //cout<<nn<<"sjdhfdds";
        if((nn/2)<=k)cout<<"YES
";
        else cout<<"NO
";
    }
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}