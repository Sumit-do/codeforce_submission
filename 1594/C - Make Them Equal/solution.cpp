#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
#include <bits/stdc++.h>
using namespace std;
 
vector<int> sieve(int n) {
    // Step 1: Create a vector of size n+1 and initialize with 1
    vector<int> prime(n + 1, 1);
 
    // Step 2: 0 and 1 are not prime
    prime[0] = prime[1] = 0;
 
    // Step 3: Mark multiples of each prime as non-prime
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == 1) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
 
    return prime;
}
 
 
void solve(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    vector<int> flag(n+1,0);
    for(int i=0;i<n;i++){
      if(s[i]!=c) flag[i+1]=1;
    }
    bool res = true;
    for(int i=1;i<=n;i++){
      if(flag[i]==1){
        res = false;
        break;
      }
    }
    if(res){
      cout<<0<<endl;
      return ;
    }
    for(int i=2;i<=n;i++){
      bool flag1 = true;
      for(int j=i;j<=n;j+=i){
        if(flag[j]==1){
          flag1 = false;
          break;
        }
      }
      if(flag1){
        cout<<1<<endl;
        cout<<i<<endl;
        return;
      }
    }
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}