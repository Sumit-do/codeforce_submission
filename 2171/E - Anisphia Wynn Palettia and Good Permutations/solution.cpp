#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(vector<bool>& is_prime){
    int n;
    cin>>n;
    if(n<9){
        fr(i,n)cout<<i+1<<" ";
        cout<<endl;
        return;
    }
    vector<bool> visited(n+1,false);
    //cout<<1<<" ";
    visited[1]=true;
    vector<int> ans;
    ans.push_back(1);
    //vector<bool> visited(n+1,false);
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]){
            //int a = i;
            ans.push_back(i);
            visited[i]=true;
            for(int a=i*i;a<=n;a+=i){
               if(!visited[a]){
                ans.push_back(a);
                visited[a]=true;
               }
            }
        }
    }
    //fr(i,ans.size())cout<<ans[i]<<" ";
    vector<int> primes;
    for(int i=1;i<n+1;i++){
        if(!visited[i])primes.push_back(i);
    }
    cout<<1<<" ";
    int rr=0;
    for(int i=1;i<ans.size();i++){
        cout<<ans[i]<<" ";
        if((i)%2==0 && rr<primes.size()){
            cout<<primes[rr++]<<" ";
        }
    }
    cout<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //int l=1,r=2e5;
    //cin>>l>>r;
    vector<bool>vec(2e5+1,true);
    vec[1]=false;
    for(int i=2;i*i<=2e5;i++){
        if(vec[i]){
            //int a = i;
            for(int a=i*i;a<=2e5;a+=i){
                vec[a]=false;
            }
        }
    }
    //cout<<" "<<endl;
    int t;
    cin>> t;
    while(t--) {
        solve(vec);
    }
    return 0;
}