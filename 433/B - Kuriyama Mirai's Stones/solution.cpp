#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n;
    cin>>n;
    vector<ll> vec(n),vec1(n);
    fr(i,n){
        cin>>vec[i];
        vec1[i]=vec[i];
    }
    sort(vec1.begin(),vec1.end());
    vector<ll> pre_vec(n),pre_vec1(n);
    pre_vec1[0]=vec1[0];
    pre_vec[0]=vec[0];
    for(int i=1;i<n;i++){
        pre_vec1[i]=pre_vec1[i-1]+vec1[i];
        pre_vec[i]=pre_vec[i-1]+vec[i];
    }
    int m;
    cin>>m;
    fr(i,m){
        int l,r,t;
        cin>>t>>l>>r;
        if(t==1){
            cout<<pre_vec[r-1]-pre_vec[l-1]+vec[l-1]<<endl;
        }
        else{
             cout<<pre_vec1[r-1]-pre_vec1[l-1]+vec1[l-1]<<endl;
        }
    }
}
 
int main(){
    solve();
    return 0;
}