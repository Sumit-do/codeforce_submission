#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    int a=n;
    if(n%2==1){
        n--;
    }
    vector<int> res(n);
    if(n%2==0){
        int lam=n/2;
        for(int i=1;i<n;i+=2){
            res[i]=lam;
            lam--;
        }
        lam=n/2+1;
        for(int i=0;i<n;i+=2){
            res[i]=lam++;
        }
        if(a!=n){
            fr(i,n)cout<<res[i]<<" ";
            cout<<a<<endl;
            return;
            //cout<<endl;
        }
        fr(i,n)cout<<res[i]<<" ";
        cout<<endl;
    }
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}