#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
#define c(i,j) cout<<i<<' '<<j<<endl
#define ll long long int
 
bool flag(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    fr(i,n) cin>>a[i];
    fr(i,n) cin>>b[i];
    if(a[n-1]!=b[n-1]) return false;
    for(int i=0;i<(n-1);i++){
        if(a[i]!=b[i]){
            if((a[i]^a[i+1])==b[i]  ||  (a[i]^b[i+1])==b[i]){
                a[i]=b[i];
            }
            else{
                return false;
            }
        }
    }
    return true;
}
 
void solve(){
    if(flag()){
        cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}