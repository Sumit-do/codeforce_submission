#include<bits/stdc++.h>
using namespace std;
 
int spf[1000005];
 
void pre(){
    for(int i=2;i<1000005;i++) spf[i]=i;
    for(int i=2;i*i<1000005;i++){
        if(spf[i]==i){
            for(int j=i*i;j<1000005;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
 
void solve(){
    int n;
    cin>>n;
    
    int omega=0, m=0, last_p=-1;
    while(n>1){
        int p = spf[n];
        omega++;
        if(p!=last_p){
            m++;
            last_p=p;
        }
        n/=p;
    }
 
    
    cout<<omega+m-1<<endl;
}
 
int main(){
    pre();
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}