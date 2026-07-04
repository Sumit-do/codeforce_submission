#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<int,int> mpp;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int y;cin>>y;
        //if(mpp.count(y)==0)vec.push_back(y);
        mpp[y]++;
 
    }
 
    int ans = INT_MAX,curr_tem=0;
    for(auto it:mpp){
        int val=it.first,freq=it.second;
        int aaage= n-curr_tem-freq;
        ans = min(ans,max(curr_tem,aaage));
        curr_tem+=freq;
    }
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}