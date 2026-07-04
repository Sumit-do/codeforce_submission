#include<bits/stdc++.h>
using namespace std;
 
// Using standard C++ long double. This is the maximum precision without external libraries.
#define FLOAT_TYPE long double
 
// Use the standard long long type for integers
#define ll long long
 
int add(int a,int b){
    return (a+b)%(998244353);
}
 
void solve(){
   int n;
   cin>>n;
   vector<int> dp(4,0);
   dp[0]=1;
   while(n--){
    int t;
    cin>>t;
    if(t==2) dp[t] = add(dp[t],dp[t]);
    dp[t] = add(dp[t],dp[t-1]);
   }
   cout<<dp[3]<<endl;
}
 
// ... (main function remains the same)
int main(){
    // Use cin.tie(0)->sync_with_stdio(0); if you need extremely fast I/O
    int t;
    cin>>t; 
    while(t--) solve();
    return 0;
}