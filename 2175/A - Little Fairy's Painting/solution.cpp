#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> num(1e3+1,0);
    fr(i,n){
        cin>>vec[i];
        num[vec[i]]++;
    }
    int na=0;
    fr(i,1e3+1)if(num[i])na++;
    for(int i=na;i<=1000;i++){
        if(num[i])return void(cout<<i<<endl);
    }
    cout<<1000<<endl;
 
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
 