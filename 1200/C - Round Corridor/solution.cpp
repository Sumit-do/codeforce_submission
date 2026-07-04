#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(ll n,ll m,ll g) {
    int sx,ex;
    ll sy,ey;
    cin>>sx>>sy>>ex>>ey;
 
    ll a1,a2;
    if(sx==1){
        a1 = (sy - 1) / (n / g) + 1;
    }
    else{
        a1 = (sy - 1) / (m / g) + 1;
    }
    if(ex==1){
        a2 = (ey - 1) / (n / g) + 1;
    }
    else{
        a2 = (ey - 1) / (m / g) + 1;
    }
 
    if(a1 != a2) { 
        cout<<"NO
"; 
        return; 
    }
    cout<<"YES
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    long long n,m;
    cin>>n>>m>>q;
    ll g = __gcd(n,m);
    while(q--) solve(n,m,g);
    return 0;
}