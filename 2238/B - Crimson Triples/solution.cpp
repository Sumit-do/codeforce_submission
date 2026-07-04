#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin>>n;
    long long ans=0;
    for(int i=1;i<=n;i++){
        long long x = n/i;
        ans += (x*x);
    }
    cout<<ans<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}