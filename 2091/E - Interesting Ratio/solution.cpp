#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve(vector<int>& prefix_prime){
    int n;
    cin>>n;
    ll ans =0;
    for(int i=1;i<=n;i++){
        //if(n/i < i) break;
        //if(n/i)
        if(n/i < 2 ) break;
        //if(i*i==n) continue;
        ans += prefix_prime[n/i];
    }
    cout<<ans<<endl;
}
 
int main() {
    int t;
    cin>>t;
    vector<bool> is_prime(1e7+1,true);
    is_prime[1]=false;
    is_prime[2]=true;
    for(int i=2;i*i<=1e7;i++){
        int p1=i;
        if(is_prime[p1]==false) continue;
        for(long long j=p1*p1;j<=1e7;j+=p1){
            is_prime[j]=false;
        }
    }
    vector<int> prefix_prime(1e7+1);
    prefix_prime[0]=0;
    prefix_prime[1]=0;
    prefix_prime[2]=1;
    for(int i=3;i<=1e7;i++){
        if(is_prime[i]){
            prefix_prime[i] = prefix_prime[i-1]+1;
        }
        else prefix_prime[i]=prefix_prime[i-1];
    }
    
    while(t--) solve(prefix_prime);
    return 0;
}