#include <bits/stdc++.h>
using namespace std;
 
int arr(vector<int> vec,int fn){
    int sum=0;
    for(int i=0;i<=fn;i++){
        int s=0;
        for(int j=i;j<=fn;j++){
            s+=vec[j];
            if(s>0){
                sum++;
            }
            else if(s==0) return -1;
        }
    }
    return sum;
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    //int l=(n*(n+1))/2;
    vector<int> vec(n);
    int mx=1;
    if(k==(n*(n+1))/2){
        for(int i=0;i<n;i++) cout<<2<<" ";
        cout<<endl;
        return;
    }
    if(k==0){
        for(int i=0;i<n;i++) cout<<-2<<" ";
        cout<<endl;
        return;
    }
    while((mx*(mx+1))<2*k){
        mx++;
    }
    if((mx*(mx+1))==2*k){
        for(int i=0;i<mx;i++) cout<<2<<" ";
        for(int i=mx;i<n;i++) cout<<-1000<<" ";
        cout<<endl;
        return;
    }
    /*if(mx==n){
        for(int i=0;i<n-1;i++) cout<<2<<" ";
        cout<<-1<<endl;
        return ;
    }*/
    for(int i=0;i<(mx-1);i++) vec[i]=2;
    for(int i=1;i<=1000;i++){
        vec[mx-1]=-i;
        if(arr(vec,mx-1)==k){
            for(int j=(mx);j<n;j++) vec[j]=-1000;
            for(int j=0;j<n;j++) cout<<vec[j]<<" ";
            cout<<endl;
            return ;
        }
    }
}
 
int main(){
  int t;
  cin>>t;
  while(t--) solve();
    return 0;
}