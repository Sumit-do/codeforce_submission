#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
   fr(i,n) cin>>vec[i];
    int x;
    cin>>x;
    int a =INT_MAX,b=INT_MIN;
    for(int i=0;i<n;i++){
       a=min(a,vec[i]);
       b=max(b,vec[i]);
    }
    if(a<=x && b>=x) cout<<"YES
";
    else cout<<"NO
";
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}