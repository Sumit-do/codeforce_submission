#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    long long  k_max = 0,k_min = 0;
    for(int i=0;i<n;i++){
      long long  k1_max = max(k_max-a[i],b[i]-k_min);
      long long  k1_min = min(k_min-a[i],b[i]-k_max);
      k_max=k1_max;
      k_min=k1_min;
    }
    cout<<k_max<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}