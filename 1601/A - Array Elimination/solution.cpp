#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
void solve(){
   int n;
   cin>>n;
   ll s=0;
   vector<int> vec(n);
   fr(i,n) {cin>>vec[i]; s+=vec[i];}
   if(s==0){
    fr(i,n) cout<<(i+1)<<' ';
    cout<<endl;
    return;
   }
   int result =0;
   fr(i,30){
    int c=0;
    fr(j,n){
        if((vec[j]>>i)&1){
            c++;
        }
    }
    result = __gcd(result,c);
   }
   fr(i,result){
    if(result%(i+1)==0){
        cout<<(i+1)<<' ';
    }
   }
   cout<<endl;
 
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