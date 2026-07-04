#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    map<int,int> mpp1;
    fr(i,n){
        cin>>vec[i];
        mpp1[vec[i]]++;
    }
   map<int,int> mpp;
   int i=0,j=0;
   ll ans=0;
   while(j<n && i<=j){
    int a = vec[j];
    mpp[vec[j]]++;
    if(mpp1[j]%k){
        return void(cout<<0<<endl);
    }
    if(mpp[vec[j]]>mpp1[vec[j]]/k){
        while(vec[i]!=vec[j]){
            mpp[vec[i]]--;
            i++;
        }
        mpp[vec[i]]--;
        i++;
        if(i>j){
            i--;
            mpp[vec[i]]++;
        }
        //continue;
    }
    ans += j-i+1;
    j++;
   }
   cout<<ans<<endl;
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