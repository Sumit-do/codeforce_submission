#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
 
void solve(){
    int m,n;
    cin>>n>>m;
    vector<pair<int,int>> vec(m);
    fr(i,m){
        cin>>vec[i].first>>vec[i].second;
    }
    int q;
    cin>>q;
    vector<int> command(q);
    fr(i,q)cin>>command[i];
    int i=1,j=q;
    int ans=-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        vector<int> vv(n,0);
        fr(i,mid)vv[command[i]-1]=1;
        vector<int> freq(n,0);
        freq[0]=vv[0];
        for(int i=1;i<n;i++)freq[i]=freq[i-1]+vv[i];
        bool flag = false;
        fr(i,m){
            int tot=vec[i].second-vec[i].first+1;
            int uj=vec[i].second,ui=vec[i].first;
            int f_1=freq[uj-1]-freq[ui-1]+vv[ui-1];
            int f_0=tot-f_1;
            if(f_1>f_0)flag=true;
        }
        if(flag){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<ans<<endl;
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    cout<<endl;
    return 0;
}