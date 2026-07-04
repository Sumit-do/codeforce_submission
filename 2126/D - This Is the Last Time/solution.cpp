#include<bits/stdc++.h>
 
using namespace std;
 
bool com(pair<int,pair<int,int>> a,pair<int,pair<int,int>>b){
    if(a.first<b.first){
        return true;
    }
    else if(a.first==b.first){
        if((a.second).first<(b.second).first){
            return true;
        }
        else if((a.second).first==(b.second).first){
            if((a.second).second<(b.second).second){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
    return false;
}
 
 
 
 
int main(){
    int t;
    cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<pair<int,pair<int,int>>> pair;
    for(int i=0;i<n;i++){
        int l,real,r;
        cin>>l>>r>>real;
        pair.push_back({l,{real,r}});
    }
    sort(pair.begin(),pair.end(),com);
    for(auto it:pair){
        if(it.first<=k && k<=((it.second).first)){
            k = (it.second).first;
        }
    }
    cout<<k<<endl;
}
    return 0;
}