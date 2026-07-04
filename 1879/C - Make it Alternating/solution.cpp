#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
long long f(long long i){
  if(i==0) return 1;
  return i;
}
 
long long g(int n){
  if(n==1 || n==0) return 1;
  return ((n)*(g(n-1)))%998244353;
}
 
void solve(){
   string s;
   cin>>s;
   char c = s[0];
   vector<int> freq;
   int n=0,i=0;
   back:
   while(i<s.size() && s[i]==c){
    n++;
    i++;
   }
   //i++;
   freq.push_back(n);
   if(i<s.size()){
    c = s[i];
    n=0;
    goto back;
   }
   /*for(auto it:freq){
    cout<<it<<endl;
   }*/
   
   long long  op=0,num_of_ways=1;
   for(auto it:freq){
   // cout<<it<<endl;
    op += it-1;
    
    num_of_ways *= it;
    num_of_ways %= 998244353;
   }
   
   num_of_ways = (num_of_ways*g(op))%(998244353);
   cout<<op<<" "<<num_of_ways<<endl;
   
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}