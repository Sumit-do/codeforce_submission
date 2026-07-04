#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
void solve(){
    ll x;
    cin>>x;
    ll res=0;
    fr(i,64){
        if((x>>i)&1){
            ll t = (1ll<<i)-1;
            res += (t*2)+1;
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}