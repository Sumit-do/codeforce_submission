#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n;
    cin>>n;
    map<pair<int,int>,int> mpp;
    vector<int> a(n),b(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    fr(i,n){
        mpp[{a[i],b[i]}]=i;
    }
    vector<pair<int,int>> ans;
    if(n%2==0){
        for(auto it:mpp){
            int aa=it.first.first,bb=it.first.second;
            if(aa==bb || mpp.count({bb,aa})==0)return void(cout<<-1<<endl);
        }
    }
    else{
        int c=0;
        for(auto it:mpp){
            int aa=it.first.first,bb=it.first.second;
            if(aa==bb)c++;
            if(mpp.count({bb,aa})==0)return void(cout<<-1<<endl);
        }
        if(c!=1)return void(cout<<-1<<endl);
    }
    for(int i=0;i<n/2;i++){
        int aa=a[i],bb=b[i];
        if(aa==bb){
            int j = n/2;
            mpp[{a[j],b[j]}]=i;
            swap(a[i],a[j]);
            swap(b[i],b[j]);
            mpp[{bb,aa}]=j;
           
            ans.push_back({i,j});
            i--;
            continue;
        }
        int j = mpp[{bb,aa}];
        mpp[{a[n-1-i],b[n-1-i]}]=j;
        swap(a[j],a[n-1-i]);
        swap(b[j],b[n-1-i]);
        mpp[{bb,aa}]=n-1-i;
        if(j!=n-1-i)ans.push_back({j,n-1-i});
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first+1<<" "<<it.second+1<<endl;
    }
}
 
 
int main() {
    int t;
    cin>>t;
    while(t--)solve();
}