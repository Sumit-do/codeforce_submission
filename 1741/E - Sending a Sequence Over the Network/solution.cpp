#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
 
void solve() {
   int n;
   cin>>n;
   vector<int>vec(n);
   fr(i,n)cin>>vec[i];
   vector<int> block(n,0);
   fr(i,n){
    int len=vec[i];
    if(i==0 && len+i<n)block[len+i]=1;
    if(i>0 && len+i<n && block[i-1])block[len+i]=1;
    if(i-len-1>=0 && block[i-len-1])block[i]=1;
    if(i-len==0)block[i]=1;
   }
   if(block[n-1])cout<<"YES
";
   else cout<<"NO
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}