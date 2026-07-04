#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
#include <bits/stdc++.h>
using namespace std;
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n),vec1(2*n+1,-1);
    for(int i=0;i<n;i++) {
      cin>>vec[i];
      vec1[vec[i]]=i+1;
    }
    long long res = 0;
    for(int i=0;i<n;i++){
      for(int j=1;j<=(2*n/vec[i]);j++){
        if(j==vec[i]) continue;
        if(vec1[j]==-1) continue;
        int key = vec[i]*j;
        int pass = i+1 + vec1[j];
        if(key==pass) res++;
      }
    }
    cout<<res/2<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}