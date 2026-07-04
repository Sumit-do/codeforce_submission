#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    int maxx=INT_MIN;
    for(int i=0;i<(n-1);i++){
        if(vec[i]>vec[i+1]){
            maxx = max(maxx,vec[i]-vec[i+1]);
        }
    }
    if(maxx==INT_MIN)return void(cout<<"YES
");
    for(int i=0;i<(n-1);i++){
        if(vec[i]>vec[i+1]){
            if((vec[i+1]+maxx)<vec[i])return void(cout<<"NO
");
            vec[i+1]+=maxx;
        }
    }
    cout<<"YES
";
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}