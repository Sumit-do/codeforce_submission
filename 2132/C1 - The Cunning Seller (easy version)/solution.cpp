#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
ll p(int x){
    ll res=1;
    for(int i=0;i<x;i++){
        res *= 3;
    }
    return res;
}
 
 
ll f(int x){
    ll a = p(x+1);
    ll b = p(x-1);
    return (a+x*b);
}
 
 
void solve(){
   ll n;
   cin>>n;
   ll result =0;
   for(int i=19;i>=0;i--){
        ll t=n/p(i);
        result += (t%3)*f(i); 
   }
   cout<<result<<endl;
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