#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
int g(int x){
    if(x==0)return 4;
    return x;
}
 
void solve(){
    string s;
    cin>>s;
    int f_0=0,f_1=0;
    fr(i,s.size()){
        if(s[i]=='0'){
            f_0++;
            if(f_0%2==1)cout<<1<<" "<<1<<endl;
            else cout<<3<<" "<<1<<endl;
        }
        else {
            f_1++;
            cout<<g(f_1%4)<<" "<<2<<endl;
        }
 
 
    }
}
 
 
 
 
int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
    return 0;
}