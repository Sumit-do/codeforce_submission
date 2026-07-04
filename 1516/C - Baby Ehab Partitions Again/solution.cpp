#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<int> dp(2e5+1,0);
    dp[0]=1;
    fr(i,n){
        vector<int> temp(2e5+1,0);
        temp[0]=1;
        for(int j=0;j+vec[i]<=(2e5);j++){
            if(dp[j])temp[j+vec[i]]=1;
        }
        for(int j=0;j<=(2e5);j++){
            if(temp[j])dp[j]=1;
        }
    }
    int sum=0;
    fr(i,n)sum+=vec[i];
    if(sum%2==1)return void(cout<<0<<endl);
    if(dp[sum/2]==0)return void(cout<<0<<endl);
    int small=INT32_MAX;
    int ans=-1;
    fr(i,n){
        if(vec[i]%2==1){
            ans=i+1;
            break;
        }
        sum-=vec[i];
        if(dp[sum/2]==0){
            ans=i+1;
            break;
        }
        sum+=vec[i];
    }
    cout<<1<<endl;
    cout<<ans<<endl;
}
 
int main(){
    int t;
    //cin>>t;
    t=1;
    solve();
    return 0;
}