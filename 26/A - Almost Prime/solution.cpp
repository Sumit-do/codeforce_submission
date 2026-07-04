#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
 
 
int f(int n){
   vector<int> factors;
   int k = n;
   for(int i=2;i*i<=k;i++){
    if(n%i==0){
        factors.push_back(i);
        while(n%i==0){
            n /= i;
        }
    }
   }
   if(n>1) factors.push_back(n);
   return factors.size();
}
 
void solve(){
   int n;
   cin>>n;
   int ans =0;
   for(int i=1;i<=n;i++){
    if(f(i)==2) ans++;
   }
   cout<<ans<<endl;
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    ////std::cin >> t;
    solve();
    return 0;
}