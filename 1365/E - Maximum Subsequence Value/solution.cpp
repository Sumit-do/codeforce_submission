#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    long long ans = LLONG_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                ans = max(((vec[i]|vec[j])|vec[k]),ans);
            }
        }
    }
    if(n==1)ans=vec[0];
    else if(n==2)ans=vec[0]|vec[1];
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    while(t--)solve();
    return 0;
}