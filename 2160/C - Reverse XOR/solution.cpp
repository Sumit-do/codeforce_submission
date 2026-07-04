#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int g(int x){
    int ans=0;
    while(x>0){
        ans++;
        x/=2;
    }
    return ans;
}
void solve() {
    int n;
    cin>>n;
    //int j=0;
    //cout<<n<<endl;
    while(n>0 && (n&1)==0)n/=2;
    //cout<<n<<endl;
    int len=g(n);
    //int i=0;
    //while(i<len && ((len>>i)&1)==0)i++;
    for(int i=0;i<len/2;i++){
        int j = len-1-i;
        if(((n>>i)&1)!=((n>>j)&1)){
            return void(cout<<"NO
");
        }
    }
    if(len%2==1){
        if(((n>>(len/2))&1)==1)return void(cout<<"NO
");
    }
    cout<<"YES
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}