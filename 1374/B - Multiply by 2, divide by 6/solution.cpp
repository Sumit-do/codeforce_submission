#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    //find other factoprs
    int f_2=0,f_3=0;
    while(n%2==0){
        f_2++;
        n/=2;
    }
    while(n%3==0){
        f_3++;
        n/=3;
    }
    if(n>1 || f_2>f_3)return void(cout<<-1<<endl);
    cout<<(f_2 + 2*(f_3-f_2))<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}