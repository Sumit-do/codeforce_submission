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
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    sort(vec.begin(),vec.end());
    int count1 = 0;
    if(vec[0]==vec[n-1])return void(cout<<(ll)n*(ll)(n-1)<<endl);
    int i=0;
    while(i<n && vec[i]==vec[0]){
        i++;
        count1++;
    }
    i=n-1;
    int count2=0;
    while(i>=0 && vec[i]==vec[n-1]){
        i--;
        count2++;
    }
    ll ans = 2*((ll)count1*(ll)count2);
    cout<<ans<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}