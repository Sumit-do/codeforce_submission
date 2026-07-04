#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec;
    int count = 0;
    //int i=2;
    //bool first = true,second = true;
    int i=2;
    while(i*i<=n && count !=3){
      if(n%i==0){
        vec.push_back(i);
        n /= i;
        count++;
        if(count==2 && n!=i){
          vec.push_back(n);
          count++;
        }
      }
      i++;
    }
    if(count==3){
      cout<<"YES
";
      cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;
    }
    else{
      cout<<"NO
";
    }
}
 
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}