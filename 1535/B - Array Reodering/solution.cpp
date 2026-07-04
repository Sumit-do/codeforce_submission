#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec;
    int n_2=0;
    fr(i,n){
        int a;
        cin>>a;
        if(a%2==0)n_2++;
        else vec.push_back(a);
    }
    int u=vec.size();
    int n_3=0;
    fr(i,vec.size()){
        for(int j=i+1;j<vec.size();j++){
            if(__gcd(vec[i],vec[j])!=1)n_3++;
        }
    }
    ll a1=(n_2)*u;
    ll a2=n_3;
    ll a3=((n_2)*(n_2-1))/2;
    cout<<a1+a2+a3<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
 