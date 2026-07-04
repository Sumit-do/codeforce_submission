#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    int n,x;
    cin>>n>>x;
    ll ans =0;
    for(int a =1;a<=n;a++){
        for(int b=1;b<=n/a;b++){
            ans += max(0,min((n-a*b)/(a+b),x-a-b));
        }
    }
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}