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
    vector<pair<int,int>> vec(n);
    fr(i,n){
        cin>>vec[i].first;
        cin>>vec[i].second;
    }
    long double ans=0;
    for(int i=n-1;i>=0;i--){
        long double ii = 100.00L-vec[i].second;
        ii=ii/100.00L;
        long double temp = ans*ii + vec[i].first;
        if(temp>=ans){
            ans=temp;
        }
    }
    //cout<<ans<<endl;
    cout << fixed << setprecision(10) << ans << "
";
 
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}