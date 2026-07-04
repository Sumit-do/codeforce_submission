#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
 
 
void solve(){
   string a ,b,c;
   int n,m;
   cin>>n>>a>>m>>b>>c;
   for(int i=m-1;i>=0;i--){
    if(c[i]!='V') continue;
    cout<<b[i];
   }
   for(int i=0;i<n;i++){
    cout<<a[i];
   }
   for(int i=0;i<m;i++){
    if(c[i]!='D') continue;
    cout<<b[i];
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