#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
void solve(){
    ll x,y;
    cin>>x>>y;
    if((x-2*y)%3==0 && (x+4*y)%3==0 && ((x-2*y)>=0 && (x+4*y)>=0))cout<<"YES
";
    else cout<<"NO
";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}