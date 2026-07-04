#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    int ans = 0;
    ans += vec[n-1];
    int temp =0;
    for(int i=n-2;i>=0;i--){
        temp = max(temp,vec[i]);
    }
    cout<<temp+ans<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}