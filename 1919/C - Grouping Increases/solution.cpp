#include<bits/stdc++.h>
using namespace std;
 
#define FLOAT_TYPE long double
#define ll long long
 
 
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int p1=INT_MAX,p2=INT_MAX;
    int ans =0;
    for(int i=0;i<n;i++){
        if(p1>=vec[i] && p2>=vec[i]){
            if(p1>p2){
                p2 = vec[i];
            }
            else{
                p1=vec[i];
            }
        }
        else if(p1>=vec[i] ){
            p1=vec[i];
        }
        else if(p2>=vec[i]){
            p2=vec[i];
        }
        else{
            if(p1>p2){
                p2=vec[i];
                ans++;
            }
            else{
                p1=vec[i];
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}