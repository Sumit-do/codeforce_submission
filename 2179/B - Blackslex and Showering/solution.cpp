#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
int g(int x){
    if(x<0)return -1*x;
    return x;
}
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    ll sum=0;
    fr(i,n){
        cin>>vec[i];
        //sum+=vec[i];
    }
    fr(i,n-1)sum+=g(vec[i]-vec[i+1]);
 
    int ans_max = INT_MIN;
    ans_max=max(ans_max,g(vec[0]-vec[1]));
    ans_max=max(ans_max,g(vec[n-1]-vec[n-2]));
    for(int i=1;i<n-1;i++){
        if((vec[i-1]<=vec[i] && vec[i+1]<=vec[i])||(vec[i-1]>=vec[i] && vec[i+1]>=vec[i])){
            ans_max=max(ans_max,2*min(g(vec[i]-vec[i-1]),g(vec[i]-vec[i+1])));
        }
    }
    //cout<<ans_max<<endl;
    cout<<sum-ans_max<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}