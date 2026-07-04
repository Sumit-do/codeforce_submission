#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
   int n;
   cin>>n;
   cout<<(1<<n)-1<<" ";
   int temp = n;
   int i=0;
   while(temp>0){
    int i=0;
    int u =  (1<<(temp-1))-1;
    //cout<<"u"<<u<<endl;
     while(((i<<temp)+u) < (1<<n)){
     cout<<((i<<temp)+u)<<" ";
     i++;
    }
    temp--;
   }
   
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