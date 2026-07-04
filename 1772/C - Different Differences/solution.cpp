#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int k,n;
    cin>>k>>n;
    int root = sqrt(9+8*(n-1-k));
   // cout<<root<<endl;
    int l = 3+root;
    l/=2;
    if(l>=3){
        int plus=0;
        int a =1;
        fr(i,min(l,k)){
            cout<<a+plus<<" ";
            a+=plus;
            plus++;
        }
        //cout<<l<<endl;
        fr(i,k-l){
            cout<<++a<<" ";
        }
        cout<<endl;
    }
    else{
        fr(i,k){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}