#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
long long __lcm(long long a , int b,int limits){
    if(a>limits)return a;
    long long bb = b;
    long long mul = a*b;
    mul /= __gcd(a,bb);
    if(mul>limits)return limits+1;
    return mul;
}
 
 
 
void solve(){
   int n,m;
   cin>>n>>m;
   vector<int> a(n),b(m);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<m;i++)cin>>b[i];
   vector<long long > ccp(n+m+1,0),cct(n+m+1,0);
   for(int i=0;i<n;i++){
    cct[a[i]]++;
   }
   for(int i=1;i<=n+m;i++){
    for(long long j=1;j*i<=(n+m);j++){
        ccp[j*i]+=cct[i];
    }
   }
 
   int a_n=0,b_n=0;
   long long lccm =a[0];
   for(int i=0;i<n;i++){
    lccm = __lcm(lccm,a[i],n+m);
   }
   for(int i=0;i<m;i++){
    if(b[i]%lccm == 0 && lccm <= (n+m))a_n++;
    else if(ccp[b[i]]==0)b_n++;
   }
   int mid_n = m - a_n - b_n;
   int xx_a  = (mid_n + 1)/2;
   int yy_a = (mid_n)/2;
   xx_a+=a_n;
   yy_a+=b_n;
   if(xx_a > yy_a){
    cout<<"Alice
";
   }
   else{
    cout<<"Bob
";
   }
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}