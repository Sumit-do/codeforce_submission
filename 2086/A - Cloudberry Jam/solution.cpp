#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
long long f(long long curr,long long x){
    //if(curr%x==0)return curr;
    if( curr > INT32_MAX)return curr;
    return (curr/__gcd(curr,x))*x;
}
 
void solve(){
    int n;
    cin>>n;
    cout<<2*n<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}