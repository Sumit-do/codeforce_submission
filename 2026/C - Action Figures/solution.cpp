#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int n_1=0,n_0=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0')n_0++;
        else n_1++;
        if(n_1==0){
            n_0=0;
            continue;
        }
        if(n_0>=n_1){
            n_0-=n_1;
            n_1=0;
        }
        else{
            n_1-=n_0;
            n_0=0;
        }
    }
    ll sum_of_0=0;
    fr(i,n){
        if(s[i]=='0')sum_of_0+=i+1;
    }
    int lam = n_1/2;
    if(lam*2!=n_1)lam++;
    fr(i,n){
        if(s[i]=='1' && lam){
            sum_of_0+=i+1;
            lam--;
        }
    }
    cout<<sum_of_0<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}