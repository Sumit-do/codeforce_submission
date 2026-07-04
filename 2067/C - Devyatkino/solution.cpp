#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
ll g(int x){
    ll a=1;
    while(x--)a*=10;
    return a;
}
 
void solve() {
    ll n;
    cin>>n;
    vector<int> digits(13,0);
    int ans = 9;
    for(int i=0;i<=12;i++){
        digits[i]=(n/g(i))%10;
    }
    //fr(i,9)cout<<digits[i]<<" ";
    //cout<<endl;
    for(int i=0;i<=12;i++){
        if(i==0){
            if(digits[0]>=7) ans = min(ans,digits[0]-7);
            if(digits[0]<7)ans = min(ans,digits[0]+3);
        }
        else{
            int remain=n%g(i);
            //if(remain==n)break;
            int curr =  digits[i];
            if(curr==7)return void(cout<<0<<endl);
            if(curr<7 && 7 - curr <= remain)ans = min(ans,7-curr);
            if(curr<7 && 7 - curr > remain)ans = min(ans,8-curr);
            if(curr>7 && curr==8) {
                //cout<<"hee"<<endl;
                ans = min(ans,remain+1);
            }
        }
    }
    cout<<ans<<endl;
}
 
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}