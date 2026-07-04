#include<bits/stdc++.h>
using namespace std;
 
 
 
void solve(){
    string x,y;
    cin>>x>>y;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int pos_y = y.find('1');
    int pos_x=x.find('1',pos_y);
    
    cout<<pos_x-pos_y<<endl;
}
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}