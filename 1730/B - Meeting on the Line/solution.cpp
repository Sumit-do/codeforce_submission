#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
 
void solve() {
   int n;
   cin>>n;
   vector<long double> x(n),t(n);
   fr(i,n)cin>>x[i];
   fr(i,n)cin>>t[i];
   if(n==1)return void(cout<<x[0]<<endl);
   long double l=0,r=1e9;
   long double ans=0;
   fr(i,100){
    long double m1,m2;
    m1 = l + (r-l)/3.0;
    m2 = l + 2*((r-l)/3.0);
    long double a1=0,a2=0;
    fr(i,n){
        a1=max(a1,t[i]+abs(m1-x[i]));
        a2=max(a2,t[i]+abs(m2-x[i]));
    }
    if(a1<a2){
        r=m2;
        ans=r;
    }
    else if(a1>a2){
        l=m1;
        ans=l;
    }
    else{
        //return void(cout<<l<<endl);
    }
   }
   cout << fixed << setprecision(10) << l << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}