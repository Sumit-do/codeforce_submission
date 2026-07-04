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
  map<ll,int> mpp;
  int n=0;
  for(ll i=2;i*i<=a;i++){
    if(a%i==0){
        while(a%i==0){
            a /= i;
            //cout<<i<<" ";
            mpp[i]++;
            n++;
        }
    }
  }
  if(a>1) { mpp[a]++; n++;}
  ll sum =0;
  while(n){
    ll nn=1;
    for(auto it:mpp){
        if(mpp[it.first]==0) continue;
        nn *= it.first;
        mpp[it.first]--;
        n--;
    }
    sum += nn;
  }
  cout<<sum<<endl;
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