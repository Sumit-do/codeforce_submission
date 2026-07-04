#include <iostream>
#include <vector>
 
using namespace std;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    for(int i=0;i<n-1;i++){
        if(vec[i]%2==vec[i+1]%2)return void(cout<<"NO
");
    }
    cout<<"YES
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