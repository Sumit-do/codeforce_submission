#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec_odd,vec_even;
     ll sum=0;
    fr(i,n){
        int a;
        cin>>a;
        sum+=a;
        if(a%2==0)vec_even.push_back(a);
        else vec_odd.push_back(a);
    }
    sort(vec_odd.begin(),vec_odd.end());
    int y=vec_odd.size();
    if(y==0){
        cout<<0<<endl;
        return;
    }
    y/=2;
    fr(i,y)sum-=vec_odd[i];
    cout<<sum<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //int l=1,r=2e5;
    //cin>>l>>r;
    
    //cout<<" "<<endl;
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}