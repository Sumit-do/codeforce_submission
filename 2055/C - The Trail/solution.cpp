#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<ll>row(n),col(m,0);
    vector<vector<ll>>mat(n,vector<ll>(m));
    for(int i=0;i<n;i++){
        ll ui=0;
        for(int j=0;j<m;j++){
            ll a ;
            cin>>a;
            mat[i][j]=a;
            col[j]+=a;
            ui+=a;
        }
        row[i]=ui;
    }
    int i=0,ki=0,kj=0;
    while(s[i]){
        if(s[i]=='D'){
            ll a1=row[ki];
            mat[ki][kj]=-1*a1;
            col[kj]+=(-1)*a1;
            ki++;
        }
        else{
            ll a1=col[kj];
            mat[ki][kj]=-1*a1;
            row[ki]+=(-1)*a1;
            kj++;
        }
        i++;
    }
    mat[ki][kj]=(-1)*row[ki];
    fr(i,n){
        fr(j,m)cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}