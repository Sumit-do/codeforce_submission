#include <bits/stdc++.h>
using namespace std;
 
 
int f(int x,int i){
    if(i%2==0)return 1;
    return -1;
}
 
void solve(){
    int n;cin>>n;
    vector<int> vec(n);
    map<int,int> mpp;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mpp[vec[i]]++;
        sum+=vec[i];
    }
    vector<int> ans;
    for(auto it:mpp){
        if(it.first % 2 == 1)ans.push_back(it.second);
        //else {
        //    ans1[0]+=(it.second/2)*(long long)(it.first);
          //  ans1[1]=ans1[0];
        //}
    }
    sort(ans.begin(),ans.end(),greater<int> ());
    long long diff=0;
    for(int i=0;i<(int)ans.size();i++){
        diff += f(-1,i)*ans[i];
    }
    long long x = (sum-diff)/2;
    cout<<x+diff<<" "<<x<<endl;
}
 
int main() {
    int t;cin>>t;
    while(t--)solve();
    return 0;
}