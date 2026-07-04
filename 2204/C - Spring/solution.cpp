#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(){
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
 
    ll ab = (a*b)/__gcd(a,b);
    ll bc = (b*c)/__gcd(b,c);
    ll ac = (a*c)/__gcd(a,c);
 
    ll abc = (ab*c)/__gcd(ab,c);
 
    ll k_a = 2*(m/abc) 
            + 3*(((m/ab)-(m/abc)) + ((m/ac)-(m/abc))) 
            + 6*(m/a - m/ab - m/ac + m/abc);
 
    ll k_b = 2*(m/abc) 
            + 3*(((m/ab)-(m/abc)) + ((m/bc)-(m/abc))) 
            + 6*(m/b - m/ab - m/bc + m/abc);
 
    ll k_c = 2*(m/abc) 
            + 3*(((m/bc)-(m/abc)) + ((m/ac)-(m/abc))) 
            + 6*(m/c - m/bc - m/ac + m/abc);
 
    cout<<k_a<<" "<<k_b<<" "<<k_c<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}