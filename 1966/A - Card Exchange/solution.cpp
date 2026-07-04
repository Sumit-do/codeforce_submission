#include<bits/stdc++.h>
using namespace std;
void solve(){
int n,k;
cin>>n>>k;
vector<int> vec(101,0);
 
for(int i=0;i<n;i++){
int t;cin>>t;vec[t]++;
}
 
for(int i=1;i<=100;i++){
if(vec[i]>=k)return void(cout<<k-1<<endl);
}
 
cout<<n<<endl;
 
}
 
int main(){
int t;cin>>t;
while(t--)solve();
return 0;
}