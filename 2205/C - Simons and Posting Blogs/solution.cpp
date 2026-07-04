#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
 
multiset<vector<int>> f(multiset<vector<int>> y){
    if(y.size()==0){
        cout<<endl;
        return {};
    }
    //finding smallest lexographically vector
    vector<int> temp=*(y.begin());
    map<int,int> mpp;
    for(auto it:temp)mpp[it]++;
    multiset<vector<int>> yy;
    for(auto it:y){
        vector<int> emp;
        for(auto u:it){
            if(mpp.count(u)==0){
                emp.push_back(u);
            }
        }
        if(!emp.empty()){
            yy.insert(emp);
        }
    }
    for(auto it:temp)cout<<it<<" ";
    return yy;
}
 
void solve(){
    int n;
    cin>>n;
    multiset<vector<int>> md;
    fr(i,n){
        int l;
        cin>>l;
        vector<int> y(l);
        fr(k,l){
            cin>>y[k];
        }    
        vector<int> tt;
        map<int,int> kl;
        for(int i=l-1;i>=0;i--){
            if(kl.count(y[i])==0){
                tt.push_back(y[i]);
                kl[y[i]]++;
            }
        }
        md.insert(tt);
    }
    while(!md.empty()){
        md = f(md);
    }
    cout<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}