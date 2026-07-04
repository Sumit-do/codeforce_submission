#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    string s;
   
    cin>>s;
     int n=0;
     for(int i=0;s[i];i++)n++;
    cout<<3<<endl;
    cout<<"R"<<" "<<n-1<<endl;
    cout<<"L"<<" "<<n<<endl;
    cout<<"L"<<" "<<2<<endl;
}
 
 
int main(){
    
        solve();
    
    return 0;
}