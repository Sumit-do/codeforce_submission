#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    while(n>3){
        int x=n,y=n-1;
        cout<<x<<" "<<y<<" "<<y<<" "<<x<<" "<<y<<" "<<x<<" "<<x<<" "<<y<<" ";
        n-=2;
    }
    if(n==3){
        cout<<1<<" "<<1<<" "<<2<<" "<<1<<" "<<2<<" "<<3<<" "<<1<<" "<<3<<" "<<2<<" "<<2<<" "<<3<<" "<<3<<endl;
    }
    if(n==2){
        int x=n,y=n-1;
        cout<<x<<" "<<y<<" "<<y<<" "<<x<<" "<<y<<" "<<x<<" "<<x<<" "<<y<<endl;
    }
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
}