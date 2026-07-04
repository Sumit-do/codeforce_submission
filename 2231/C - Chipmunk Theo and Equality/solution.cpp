#include<bits/stdc++.h>
using namespace std;
 
bool cat(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b){
    return a.second.second < b.second.second;
}
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    unordered_map<int,pair<int,int>> mpp;  // changed
    for(int i=0;i<n;i++){
        int yy=vec[i];
        int step=0;
        if(yy==1){
            mpp[1].first++;
            mpp[2].first++;
            mpp[2].second++;
            continue;
        }
        while (yy>=1){
            mpp[yy].first++;
            mpp[yy].second+=step;
            step++;
            if(yy==1)break;
            if(yy%2==0)yy/=2;
            else yy++;
        }
    }
    vector<pair<int,pair<int,int>>> v;
    for(auto it:mpp){
        if(it.second.first == n){
            v.push_back({it.first,{it.second.first,it.second.second}});
        }
    }
    sort(v.begin(),v.end(),cat);
    cout<<v[0].second.second<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);  // added
    cin.tie(NULL);                // added
    int t;cin>>t;
    while(t--)solve();
    return 0;
}