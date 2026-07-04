#include<bits/stdc++.h>
using namespace std;
vector<int> c(1e6+1);
int f(int x){
    for(int i=1;i<20;i++){
        if((x%(1<<i))!=0)return i-1;
    }
    return 19;
}
 
void pre(){
    c[0]=0;
    c[1]=0;
    for(int i=2;i<=1e6;i++){
        c[i]=c[i-1]+f(i);
    }
}
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            cout<<k<<" ";
            continue;
        }
        if(c[n-1]==(c[i-1]+c[n-i]))cout<<k<<" ";
        else cout<<0<<" ";
    }
    cout<<endl;
}
 
 
int main(){
    pre();
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}