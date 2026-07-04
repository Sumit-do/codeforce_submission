#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n) cin>>vec[i];
    vector<int> l1(n),l2(n);
    l2[n-1]=0;
    l2[n-2]=0;
    l1[n-1]=vec[n-1];
    l1[n-2]=vec[n-2];
    for(int i=(n-3);i>=0;i--){
        l1[i]=min(l2[i+1]+vec[i],l2[i+2]+vec[i]+vec[i+1]);
        l2[i]=min(l1[i+1],l1[i+2]);
    }
    //fr(i,n){
        //cout<<l1[i]<<" "<<l2[i]<<endl;
    //}
    cout<<l1[0]<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}