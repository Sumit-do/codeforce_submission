#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
bool isprime(ll a){
    for(ll i=2;i*i<=a;i++){
        if(a%i==0) return false;
    }
    return true;
}
 
ll lcm(ll a ,ll b){
    return (a*b)/(__gcd(a,b));
}
 
void solve(){
   ll a;
   cin>>a;
   ll b = sqrt(a);
   /*for(ll i = b;i<=a;i++){
    if(a%i==0 && lcm(a/i,i)==a){
        cout<<a/i<<" "<<i<<endl;
        return ;
    }
   }*/
   for(ll i=b;i>=0;i--){
    if(a%i==0 && lcm(a/i,i)==a){
         cout<<a/i<<" "<<i<<endl;
        return ;
    }
   }
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    //std::cin >> t;
    t=1;
    
    while(t--) solve();
 
    return 0;
}