#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
 
 
void solve(){
   int n,x;
   cin>>n>>x;
   ll y ;
   cin>>y;
   vector<int> vec(n);
   ll s=0;
   fr(i,n){
    cin>>vec[i];
    s+=vec[i];
   }
   if(y%2==1){
    if((s+x)%2==1){
        cout<<"Alice
";
    }
    else{
        cout<<"Bob
";
    }
   }
   else{
    if((s+x)%2==1){
        cout<<"Bob
";
    }
    else{
        cout<<"Alice
";
    }
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