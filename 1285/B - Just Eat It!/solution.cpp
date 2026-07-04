#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    ll addel =0;
    for(int i=0;i<n;i++){
      cin>>vec[i];
      addel += vec[i];
    }
    vector<ll> sum_of_left(n);
    sum_of_left[0]=vec[0];
    for(int i=1;i<n;i++) sum_of_left[i] = vec[i]+sum_of_left[i-1];
    //now making least num left
    vector<ll> least(n);
    least[0]=0;
    for(int i=1;i<n;i++) least[i] = min(least[i-1],sum_of_left[i-1]);
    ll yasserr =INT_MIN;
    for(int i=0;i<n;i++) {
     if(i==(n-1)){
        for(int j=1;j<n;j++) {
          //cout<<sum_of_left[i]<<" "<<vec[i]<<endl;
          yasserr = max(yasserr,sum_of_left[n-1]-sum_of_left[j]+vec[j]);
          //cout<<" yass = "<<yasserr<<endl;
        }
        break;
     }
     yasserr = max(yasserr,sum_of_left[i]-least[i]);
     //cout<<"yasserrr  "<<yasserr<<endl;
    }
    if(addel>yasserr){
      cout<<"YES
";
      return;
    }
    cout<<"NO
";
}
 
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}