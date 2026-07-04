#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    map<int,int> mpp;
    fr(i,n) {cin>>vec[i];mpp[vec[i]]++;}
    int ans = 0;
    for(auto it:mpp){
        if(it.second >= it.first) ans += it.second-it.first;
        else ans += it.second;
    }
    cout<<ans<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}