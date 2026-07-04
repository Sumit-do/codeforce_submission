#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long x;
    cin>>x;
    int result =0;
   while(x>0){
        if(x&1==1){
            result++;
        }
        x=x>>1;
   }
   cout<<result<<endl;
}
 
int main(){
    
    solve();
 
}