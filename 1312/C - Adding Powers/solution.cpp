#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int 
 
 
 
int f(ll x,int k){
    int i=0;
    while(x>0){
        i++;
        x = x/k;
    }
    return i;
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll> vec(n);
    int m=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        m = max(m,f(vec[i],k));
    }
    bool flag=true;
    for(int i=m;i>=0;i--){
        long double temp = pow(k,i);
        for(int j=0;j<n;j++){
            if(temp<=vec[j]){
                vec[j]-=temp;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(vec[i]!=0){
            flag = false;
        }
    }
    if(flag){
        cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}