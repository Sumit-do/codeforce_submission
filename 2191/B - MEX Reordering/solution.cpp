#include <iostream>
#include <vector>
 
using namespace std;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    int is_one=0,is_zero=0;
    //vector<int> vec(n);
    fr(i,n){
        int a;
        cin>>a;
        if(a==0)is_zero++;
        if(a==1)is_one++;
    }
    if(is_zero==1)return void(cout<<"YES
");
    if(is_zero && is_one)return void(cout<<"YES
");
    cout<<"NO
";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //precompute();
    int t;
    cin >> t;
    while(t--) solve();
}