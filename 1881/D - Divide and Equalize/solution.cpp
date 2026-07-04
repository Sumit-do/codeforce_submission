#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
 
 
void solve(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i=0;i<n;i++) cin>>vec[i];
  unordered_map<int,int> mpp;
  for(auto& it:vec){
    for(int i=2;i*i<=it;i++){
        if(it%i==0){
            while(it%i==0){
                it /= i;
                mpp[i]++;
            }
        }
    }
    if(it>1) mpp[it]++;
  }
  for(auto it:mpp){
    if(it.second%n != 0){
        cout<<"NO
";
        return ;
    }
  }
  cout<<"YES
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