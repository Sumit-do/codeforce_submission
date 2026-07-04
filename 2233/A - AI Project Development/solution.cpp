#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int d1=10*y+x,d2=x+y;
    int h1 = (n+10*y*z+d1-1)/d1;
    int h2 = (n+d2-1)/d2;
    cout<<min(h1,h2)<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}