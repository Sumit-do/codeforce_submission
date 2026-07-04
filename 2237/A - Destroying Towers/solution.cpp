#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> vec(n);
    long long ans=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        //ans=min(ans,vec[i]);
    }
    int till=vec[0];
    for(int i=0;i<n;i++){
        till=min(till,vec[i]);
        ans+=till;
    }
    cout<<ans<<endl;
 
}
int main(){
    int t;cin>>t;
    while (t--) solve();
    return 0;
    
}