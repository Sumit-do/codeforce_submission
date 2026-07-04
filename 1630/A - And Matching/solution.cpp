#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
#define c(i,j) cout<<i<<' '<<j<<endl
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> upper,lowwer;
    for(int i=(n-1);i>=(n/2);i--){
        upper.push_back(i);
    }
    for(int i=0;i<(n/2);i++){
        lowwer.push_back(i);
    }
    if(n==4){
        if(k==0){
            c(0,3);
            c(1,2);
        }
        else if(k==1){
            c(0,2);
            c(1,3);
        }
        else if(k==2){
            c(0,1);
            c(2,3);
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        if(k==(n-1)){
            c(upper[0],upper[1]);
            c(lowwer[2],lowwer[0]);
            c(upper[2],lowwer[1]);
            for(int i=3;i<(n/2);i++){
                c(upper[i],lowwer[i]);
            }
        }
        else{
            if(k>=(n/2)){
                c(upper[0],upper[n-1-k]);
                for(int i=1;i<(n/2);i++){
                    if(i==(n-1-k)){
                        c(0,lowwer[i]);
                    }
                    else{
                        c(upper[i],lowwer[i]);
                    }
                }
            }
            else{
                c(upper[0],lowwer[k]);
                for(int i=1;i<(n/2);i++){
                    if(i==k){
                        c(0,upper[i]);
                    }
                    else{
                        c(lowwer[i],upper[i]);
                    }
                }
            }
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