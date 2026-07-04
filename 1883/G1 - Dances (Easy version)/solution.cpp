#include<bits/stdc++.h>
using namespace std;
 
// No need for 'g' or 'x' functions anymore
#define ll long long
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(n);
    a[0]=1;
    for(int i=1;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    map<int,int> demand;
    int c=0;
    vector<int> a1,b1;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i]){
            auto it = lower_bound(b.begin(),b.end(),a[i]+1);
            if(it!=b.end()) demand[(it)-(b.begin()+i)]++;
            else demand[n-i]++;
        }
    }
    for(auto it:demand){
        long long curr = it.first-c;
        if(curr<=it.second) c= it.first;
    }
    for(int i=0;i<(n-(c));i++){
        a1.push_back(a[i]);
    }
    for(int i=c;i<n;i++){
        b1.push_back(b[i]);
    }
 
    for(int i=0;i<a1.size();i++){
        if(a1[i]>=b1[i]) c++;
    }
    cout<<c<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}