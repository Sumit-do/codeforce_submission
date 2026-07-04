#include<bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end(),greater<int> ());
    for(int i=2;i<n;i++){
        if(vec[i]!=(vec[i-2]%vec[i-1]))return void(cout<<-1<<endl);
    }
    cout<<vec[0]<<" "<<vec[1]<<endl;
}   
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}