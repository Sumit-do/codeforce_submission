#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
//typedef long long ll;
 
void solve() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<int> dp(n);
   dp[0]=1;
   for(int i=1;i<n-1;i++){
    if(s[i-1]==s[i])dp[i]=dp[i-1];
    else dp[i]=i+1;
   }
   fr(i,n-1){
    cout<<dp[i]<<" ";
   }
   cout<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}