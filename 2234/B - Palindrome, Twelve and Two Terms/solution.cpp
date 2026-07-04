#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    if(n==10)return void(cout<<-1<<endl);
    if(n%12==10)return void(cout<<22<<" "<<n-22<<endl);
    cout<<n%12<<" "<<n-(n%12)<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}