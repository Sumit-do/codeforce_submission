#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
 
 
void solve(){
   ll n;
   cin>>n;
   int count=0;
   vector<ll> result;
   for(ll i=10;i<=(1e18);i*=10){
    if(n%(i+1)==0){
        count++;
        result.push_back((n/(i+1)));
    }
   }
   if(count!=0){
    cout<<count<<endl;
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i]<<" ";
    }
    cout<<endl;
   }
   else{
    cout<<0<<endl;
   }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}