#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec_odd,vec_even;
    ll sum =0;
    for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      sum += temp;
      if(temp%2==0) vec_even.push_back(temp);
      else vec_odd.push_back(temp);
    }
    sort(vec_even.begin(),vec_even.end(),greater<int> ());
    sort(vec_odd.begin(),vec_odd.end(),greater<int> ());
    if(vec_odd.size()==0){
      for(int i=0;i<n;i++) cout<<0<<" ";
      cout<<endl;
      return;
    }
    if(vec_even.size()==0){
      for(int i=0;i<n;i++){
        if(i%2==0){
          cout<<vec_odd[0]<<" ";
        }
        else{
          cout<<0<<" ";
        }
      }
      cout<<endl;
      return ;
    }
    vector<ll> real_one;
    real_one.push_back(vec_odd[0]);
    for(auto it : vec_even) real_one.push_back(it);
    long long z = 0,z1 =0;
    for(auto it :real_one) z += it;
    z1 = z - vec_even[vec_even.size()-1];
    int ko=real_one.size();
    for(int i=1;i<real_one.size();i++){
      real_one[i] += real_one[i-1];
    }
    for(int j=0;j<n;j++){
      if(j<ko){
        cout<<real_one[j]<<" ";
      }
      else{
        int steps = j - real_one.size()-1;
        if(j==(n-1)){
          if(sum%2==0){
            cout<<0<<" ";
          }
          else{
            cout<<z<<" ";
          }
          break;
        }
        if(steps%2==0){
          cout<<z<<" ";
        }
        else {
          cout<<z1<<" ";
        }
      }
    }
    cout<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}