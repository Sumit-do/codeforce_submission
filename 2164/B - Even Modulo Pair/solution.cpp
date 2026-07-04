#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n) cin>>vec[i];
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++){
            if((vec[i]%vec[j])%2 == 0){
                cout<<vec[j]<<" "<<vec[i]<<endl;
                return ;
            }
        }
    }
    cout<<-1<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}