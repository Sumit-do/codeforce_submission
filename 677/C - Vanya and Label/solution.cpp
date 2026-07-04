#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
#define c(i,j) cout<<i<<' '<<j<<endl
ll MOD=1e9+7;
int g(int x){
    int res=0;
    for(int i=x;i<=63;i++){
        for(int j=i+1;j<=63;j++){
            if((i&j)==x){
                res++;
            }
        }
    }
    return (2*res+1);
}
 
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    ll res=1;
    vector<int> per(63);
    fr(i,64){
        per[i]=g(i);
    }
    fr(i,n){
        int c = s[i]-'0';
        if(c>=0 && c<=9){
            res *= per[c];
            res %= MOD;
        }
        else if(c>=17 && c<=42){
            res *= per[c-7];
            res %= MOD;
        }
        else if(c>=49 && c<=74){
             res *= per[c-13];
            res %= MOD;
        }
        else if(c==-3){
             res *= per[62];
            res %= MOD;
        }
        else{
            res *= per[63];
            res %= MOD;
        }
    }
    cout<<res<<endl;
}
 
int main(){
    solve();
    return 0;
}