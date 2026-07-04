#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a==b){
        if((n%2)==(a%2)){
            cout<<"YES
";
            return ;
        }
        else{
            cout<<"NO
";
            return ;
        }
    }
    if((n%2)==1){
        if(b>a){
            if(b%2 == 1){
                cout<<"YES
";
                return ;
            }
            else{
                cout<<"NO
";
                return ;
            }
        }
        else{
            if((a%2)==(b%2) && (b%2)==1){
                cout<<"YES
";
                return ;
            }
            cout<<"NO
";
        }
    }
    if((n%2)==0){
        if(b>a){
            if(b%2 == 0){
                cout<<"YES
";
                return ;
            }
            else{
                cout<<"NO
";
                return ;
            }
        }
        else{
            if((a%2)==(b%2) && (a%2)==0){
                cout<<"YES
";
                return ;
            }
            cout<<"NO
";
        }
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