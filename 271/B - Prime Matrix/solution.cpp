#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
 
void solve(vector<int> & allPrime,vector<int> & isprime){
   int n,m;
   cin>>n>>m;
   vector<vector<int>> vec(n,vector<int>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>vec[i][j];
    }
   }
   int result = INT_MAX;
   for(int i=0;i<n;i++){
    int ans=0;
    for(int j=0;j<m;j++){
        if(isprime[vec[i][j]]==0){
            auto it = upper_bound(allPrime.begin(),allPrime.end(),vec[i][j]);
            if(it!=allPrime.end()){
                ans += *it - vec[i][j];
            }
            else{
                cout<<"ERROR
";
                return ;
            }
        }
    }
    result = min(result,ans);
   }
 
   for(int i=0;i<m;i++){
    int ans=0;
    for(int j=0;j<n;j++){
        if(isprime[vec[j][i]]==0){
            auto it = upper_bound(allPrime.begin(),allPrime.end(),vec[j][i]);
            if(it!=allPrime.end()){
                ans += *it - vec[j][i];
            }
            else{
                cout<<"ERROR
";
                return ;
            }
        }
    }
    result = min(result,ans);
   }
    
   cout<<result<<endl;
 
 
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    //std::cin >> t;
    t=1;
    vector<int> isprime(1e6,1);
    isprime[1]=0;
    isprime[0]=0;
    for(int i=2;i*i<=1e6;i++){
    if(isprime[i]==1){
        for(int j=i*i;j<=1e6;j+=i){
            isprime[j]=0;
        }
    }
    }
    vector<int> allprime_till1e;
    for(int i=2;i<=1e6;i++) if(isprime[i]==1) allprime_till1e.push_back(i);
    while(t--) solve(allprime_till1e,isprime);
 
    return 0;
}