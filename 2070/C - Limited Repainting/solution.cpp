#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    ll i=0,j=1e15;
    while(i<=j){
        ll mid = i + (j-i)/2;
        int cnt=0;
        char last='R';
        fr(la,n){
            if(vec[la]>mid){
                if(s[la]=='B' && last=='R')cnt++;
                last=s[la];
            }
        }
        if(cnt<=k){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<i<<endl;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}