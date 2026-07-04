#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
#define ll long long
 
 
void solve(){
    int h,n;
    cin>>h>>n;
    vector<int> a(n),c(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>c[i];
    set<pair<ll,int>> s;
    fr(i,n){
        s.insert({1,i});
    }
    ll last_turn =1;
    while(h>0){
        pair<ll,int> p=*s.begin();
        ll turn = p.first;
        int i=p.second;
        last_turn=turn;
        h-=a[i];
        s.erase(s.begin());
        s.insert({turn+c[i],i});
    }
    cout<<last_turn<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //precompute();
    int t;
    cin >> t;
    while(t--) solve();
}