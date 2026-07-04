#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
 
 
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll l = x*y/(__gcd(x,y));
    ll a = n/x - n/l, b = n/y-n/l;
    ll sum = (2*n-a+1)*a;
    sum /= 2;
    ll sum1 = (1+b)*b;
    sum1 /= 2;
    cout<<sum-sum1<<endl;
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    //t=1;
    
    while(t--) solve();
 
    return 0;
}