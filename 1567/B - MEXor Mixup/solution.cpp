#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
 
 
int f(int x){
    if(x%4==0){
        return x;
    }
    else if(x%4==1){
        return 1;
    }
    else if(x%4==2) return x+1;
    return 0;
}
 
void solve(){
   int a,b;
   cin>>a>>b;
   int  l=f(a-1);
   if(a==1 && b==0) {cout<<1<<endl; return;}
   if(l==b ) { cout<<a<<endl; return ;}
   if((b^l)!=a){
    cout<<a+1<<endl;
   }
   else{
    cout<<(a+2)<<endl;
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