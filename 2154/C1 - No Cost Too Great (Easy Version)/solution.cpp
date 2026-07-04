#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
//typedef long long ll;
 
set<int> gg(int x){
    int i = 2;
    set<int> ans;
    while(x>0 && (ll)i*i<=(ll)x){
        if(x%i == 0){
            ans.insert(i);
            x/=i;
        }
        else{
            i++;
        }
    }
    if(x>1)ans.insert(x);
    return ans;
}
 
 
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    map<int,int> mpp;
    fr(i,n){
        int x = a[i];
        set<int> vv = gg(x);
        for(auto it:vv){
            if(mpp.count(it))return void(cout<<0<<endl);
        }
        for(auto it:vv){
            mpp[it]++;
        }
    }
    fr(i,n){
        int x = a[i]+1;
        set<int> vv = gg(x);
        for(auto it:vv){
            if(mpp.count(it))return void(cout<<1<<endl);
        }
    }
    cout<<2<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}