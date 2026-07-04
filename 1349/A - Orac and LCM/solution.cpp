#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
ll lcm (ll base,ll nw){
    ll temp = base*nw;
    return (temp)/(__gcd(base,nw));
}
 
ll power(ll x, long long n) {
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    
    ll result = 1;
    while (n > 0) {
        if (n % 2 == 1) result *= x;
        x *= x;
        n /= 2;
    }
    
    return result;
}
 
void solve(vector<int> & primes) {
   int n;
   cin>>n;
   vector<int> vec(n);
   fr(i,n)cin>>vec[i];
    vector<vector<int>> primes_mat(2e5+1,vector<int> (18,0));
    primes_mat[1][1]=n;
    fr(i,n){
        int y=vec[i];
        int indx=2;
        for(int a=2;a*a<=y;a++){
            int c=1;
            while(y>1 && y%a==0){
                primes_mat[a][c++]++;
                y/=a;
            }
        }
        if(y>1)primes_mat[y][1]++;
    }
    ll ans = 1;
    fr(i,2e5+1){
        for(int j=17;j>=1;j--){
            if(primes_mat[i][j]>=(n-1)){
                ll k = power(i,j);
                ans = lcm(ans,k);
                break;
            }
        }
    }
    cout<<ans<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    //cin >> t;
    vector<int> is_prime(2e5+1,1);
    is_prime[0]=0;
    is_prime[1]=0;
    for(int i=2;i<=1e5;i++){
        if(is_prime[i]==0)continue;
        for(int j=i+i;j<=1e5;j+=i){
            is_prime[j]=0;
        }
    }
    vector<int> prime_till;
    for(int i=2;i<=1e5;i++)if(is_prime[i])prime_till.push_back(i);
    //cout<<prime_till.size()<<endl;
    while (t--) solve(is_prime);
}