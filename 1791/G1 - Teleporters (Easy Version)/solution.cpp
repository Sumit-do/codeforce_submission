#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i,n) for(int i=0;i<n;i++)
void solve() {
   int n,c;
   cin>>n>>c;
   vector<int> vec(n);
   fr(i,n) cin>>vec[i];
   vector<int> cost_of_each_teleporter(n);
    fr(i,n){
        cost_of_each_teleporter[i]= i+1+vec[i];
    }
    sort(cost_of_each_teleporter.begin(),cost_of_each_teleporter.end());
    int res=0;
    int k=0;
    while(c>0 && k<n){
        if((c-cost_of_each_teleporter[k])>=0){
            res++;
        }
        c -= cost_of_each_teleporter[k];
        k++;
    }
    cout<<res<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}