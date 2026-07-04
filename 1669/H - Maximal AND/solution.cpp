#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    ll k;
    cin>>k;
    vector<ll> vec(n);
    fr(i,n){
        cin>>vec[i];
    }
    ll result = 0;
    for(int j=31;j>=1;j--){
        int num_1=0;
        fr(i,n){
            if((vec[i]>>(j-1))&1){
                num_1++;
            }
        }
        int z = n - num_1;
        if(z<=k){
            k-=z;
            result += pow(2,j-1);
        }
    }
    cout<<result<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}