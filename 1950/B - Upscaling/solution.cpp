#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            if(i%4==1 || i%4==2){
                if(j%4==1 || j%4==2)cout<<"#";
                else cout<<".";
            }
            else{
                if(j%4==1 || j%4==2)cout<<".";
                else cout<<"#";
            }
        }
        cout<<endl;
    }
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}