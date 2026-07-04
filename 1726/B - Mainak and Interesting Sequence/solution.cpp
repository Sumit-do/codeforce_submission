#include<bits/stdc++.h>
 
using namespace std;
void solve(){
    long long int n;
    cin>>n;
    long long int m;
    cin>>m;
    if(n>m){
        cout<<"NO"<<endl;
    }
    else{
        if(m%n==0){
            cout<<"YES"<<endl;
            for(long long  i=0;i<n;i++){
                cout<<m/n<<' ';
            }
            cout<<endl;
        }
        else if((n-(m%n))%2==1){
            if((m%n)%2==1 && (m%n)!=1){
                cout<<"NO"<<endl;
                /*for(long long i=0;i<(m%n-2);i++){
                    cout<<(m/n)+1<<' ';
                }
                cout<<(m/n)+2<<' ';
                for(long long i=0;i<(n-(m%n)+1);i++){
                    cout<<(m/n)<<' ';
                }
                cout<<endl;*/
            }
            else if(((m%n)%2==1 && (m%n)==1)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                for(long long  i=0;i<(m%n-2);i++){
                    cout<<m/n+1<<' ';
                }
                cout<<m/n+2<<' ';
                for(long long i=0;i<(n-(m%n)+1);i++){
                    cout<<m/n<<' ';
                }
                cout<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            for(long long i=0;i<(m%n);i++){
                cout<<m/n+1<<' ';
            }
            for(long long  i=0;i<(n-(m%n));i++){
                cout<<m/n<<' ';
            }
            cout<<endl;
        }
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}