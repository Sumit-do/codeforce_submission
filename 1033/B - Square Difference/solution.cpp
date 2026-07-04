#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
bool isprime(ll x){
    if(x==1) return false;
    for(ll i = 2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
 
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a-b != 1){
        cout<<"NO
";
        return ;
    }
    if(isprime(a+b)){
        cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--) solve();
 
    return 0;
}