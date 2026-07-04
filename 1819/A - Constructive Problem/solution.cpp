// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fr(i,n) for(int i=0;i<n;i++)
 
ll mex(vector<ll> vec){
    int n;
    n=vec.size();
    set<ll> s;
    fr(i,n) s.insert(vec[i]);
    ll m=0;
    for(auto it:s){
        if((it)!=m) return m;
        else{
            m++;
        }
    }
    return m;
}
 
void solve(){
    int n;
    cin>>n;
    vector<ll> vec(n);
    fr(i,n) cin>>vec[i];
    int m=mex(vec);
    if(m==n){
        cout<<"NO
";
        return ;
    }
    //check wether m+1 exist
    bool flag = true;
    fr(i,n){
        if(vec[i]==(m+1)){
            flag = false;
        }
    }
    if(flag){
        cout<<"YES
";
        return ;
    }
    int l,r;
    fr(i,n){
        if(vec[i]==(m+1)){
            l = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(vec[i]==(m+1)){
            r = i;
            break;
        }
    }
    for(int i=l;i<=r;i++){
        vec[i]=m;
    }
    if(mex(vec)==(m+1)){
        cout<<"yes
";
    }
    else{
        cout<<"NO
";
    }
}
 
int main() {
    int t;
    cin>>t;
    /*vector<ll> vec={1,2,3,4,5,6,7};
    cout<<mex(vec)<<endl;*/
    while(t--){
        solve();
    }
    return 0;
}