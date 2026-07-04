#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> freq(n+1,0);
    fr(i,n){
        cin>>vec[i];
        freq[vec[i]]++;
    }
    int ans=-1;
    fr(i,n+1){
        ans = max(ans,freq[i]);
    }
    cout<<n-ans<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}