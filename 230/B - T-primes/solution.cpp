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
 
void solve(){
   ll a;
   cin>>a;
   if(a==1){
    cout<<"NO
";
    return ;
   }
   ll g = sqrt(a);
   if(g*g==a && isprime(g)){
    cout<<"YES
";
    return;
   }
   cout<<"NO
";
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