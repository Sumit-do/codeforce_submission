#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll> vec(n);
    fr(i,n){
        cin>>vec[i];
        if(s[i]=='0')vec[i]=-1e15;
    }
    vector<ll> suffix(n),preffix(n);
    suffix[0]=0;
    for(int i=1;i<n;i++){
        suffix[i]=max((ll)0,suffix[i-1]+vec[i-1]);
    }
    preffix[n-1]=0;
    for(int i=n-2;i>=0;i--){
        preffix[i]=max((ll)0,preffix[i+1]+vec[i+1]);
    }
    fr(i,n){
        if(s[i]=='1' && suffix[i]+preffix[i]+vec[i]  > k ){
            cout<<"NO
";
            return;
        }
    }
    fr(i,n){
        if(s[i]=='1' && suffix[i]+preffix[i]+vec[i] == k ){
            cout<<"YES
";
            fr(i,n)cout<<vec[i]<<" ";
            cout<<endl;
            return;
        }
    }
    bool f=false;
    fr(i,n){
        if(s[i]=='0'){
            vec[i]=k-preffix[i]-suffix[i];
            f=true;
            break;
        }
    }
    if(f){
        cout<<"YES
";
        fr(i,n)cout<<vec[i]<<" ";
        cout<<endl;
        return;
    }
    cout<<"NO
";
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