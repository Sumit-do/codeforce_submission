#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
#define ll long long int
/*void f(int i,vector<int> &diff,vector<pair<pair<int,int>,int>> mpp){
    int l,r,x;
    l = (mpp[i].first).first;
    r=(mpp[i].first).second;
    x=mpp[i].second;
    diff[l]+=x;
    diff[r+1] -= x;
}*/
int f(ll x){
 int res=0;
 while(x>0){
 res++;
 x=x>>1;
 }
 return res;
}
 
void g(vector<ll>&mpp,ll x){
 int g = f(x);
 for(int i=0;i<g;i++){
 if((x>>i)&1){
 mpp.push_back((1<<i));
 }
 }
}
 
int l(ll n){
 int res=0;
 while(n>0){
 if((n)&1){
 res++;
 }
 n=n>>1;
 }
 return res;
}
 
 
void solve(){
 ll n;
 cin>>n;
 int k;
 cin>>k;
 if(k>n){
 cout<<"NO
";
 return;
 }
 int t=l(n);
 if(t>k){
 cout<<"NO
";
 return ;
 }
 vector<ll> bucket;
 g(bucket,n);
 int c = l(n);
 bool flag =true;
while(flag){
    int p=bucket.size();
for(int i=0;i<p;i++){
 if(c==k){
    //cout<<c<<k<<endl;
    flag = false;
    break;
 
}
 //cout<<bucket[i]<<endl;
 if(bucket[i]!=1){
 bucket[i] /= 2;
 bucket.push_back(bucket[i]);
c++;
 }
}
}
cout<<"YES
";
for(auto it:bucket){
 cout<<it<<" ";
}
cout<<endl;
}
 
int main(){
solve();
 return 0;
}