#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve() {
   int n;
   cin>>n;
   vector<pair<int,int>> vec(n);
   fr(i,n)cin>>vec[i].first>>vec[i].second;
   int i=1,j=n;
   int ans=1;
   while(i<=j){
    int mid= i + (j-i)/2;
    int count=0;
    fr(l,n){
        int lla=vec[l].first,r=vec[l].second;
        if(r>=(count) && lla>=(mid-1-count))count++;
    }
    if(count>=mid){
        ans=mid;
        i=mid+1;
    }
    else{
        j=mid-1;
    }
   }
   cout<<ans<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}