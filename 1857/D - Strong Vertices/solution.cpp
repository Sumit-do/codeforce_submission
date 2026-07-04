#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
   int n;
   cin>>n;
   vector<int> a(n),b(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];
   map<long long,vector<int>> mpp;
   vector<long long> arr(n);
   for(int i=0;i<n;i++){
    arr[i]=a[i]-b[i];
    mpp[arr[i]].push_back(i);
   }
   sort(arr.begin(),arr.end());
   long long kk = arr[n-1];
   int size = mpp[kk].size();
   cout<<size<<endl;
   for(int i=0;i<size;i++){
    cout<<mpp[kk][i]+1<<" ";
   }
   cout<<endl;
 
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}