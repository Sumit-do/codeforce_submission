#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int indx=1;
    for(int i=1;i<n;i++){
        if(s[i]<s[i%indx]){
           indx=i+1;
        }
        else if(s[i]>s[i%indx]){
            break;
        }
    }
        fr(i,k)cout<<s[i%indx];
        cout<<endl;
 
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    //cin >> t;
    while (t--) solve();
}