#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
int g(int x){
    if(x>=0)return x;
    return 0;
}
 
void solve(){
    int n,s;
    cin>>n>>s;
    int mi=INT32_MAX,ma=INT32_MIN;
    fr(i,n){
        int a;
        cin>>a;
        mi = min(mi,a);
        ma=max(ma,a);
    }
    cout<<g(2*min(ma-s,s-mi))+max(ma-s,s-mi)<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
 