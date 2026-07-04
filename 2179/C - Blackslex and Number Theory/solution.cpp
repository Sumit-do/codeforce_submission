#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
   int n;
   cin>>n;
   vector<int> vec(n);
   fr(i,n) cin>>vec[i];
    sort(vec.begin(),vec.end());
    int exp1=vec[0];
    int i=0;
    while(i<n && vec[i]==vec[0])i++;
    if(i<n){
        int a = vec[i]-vec[0];
        if(a>exp1)exp1=a;
    }
    cout<<exp1<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}