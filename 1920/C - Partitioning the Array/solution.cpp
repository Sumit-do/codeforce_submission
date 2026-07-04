#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    int ans=0;
    if(n==1)return void(cout<<1<<endl);
    for(int k=1;k*k<=n;k++){
        if(n%k!=0)continue;
        int ii=k,jj=n/k;
        int g=abs(vec[0]-vec[ii]);
        for(int i=0;i+ii<n;i++){
            g = __gcd(g,abs(vec[i]-vec[i+ii]));
        }
        if(g!=1)ans++;
        if(jj==n || jj==ii){
            if(jj==n)ans++;
            continue;;
        }
        g=abs(vec[0]-vec[jj]);
        for(int i=0;i+jj<n;i++){
            g = __gcd(g,abs(vec[i]-vec[i+jj]));
        }
        if(g!=1)ans++;
    }
    cout<<ans<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}