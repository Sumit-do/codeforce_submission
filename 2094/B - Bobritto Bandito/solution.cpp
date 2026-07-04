#include<bits/stdc++.h>
using namespace std;
 
int f( double d){
    if(d!=(int)d){
        return int(d)+1;
    }
    return int(d);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n;
        cin>>m;
        cin>>l;
        cin>>r;
        cout<<(m*l)/n<<" "<<f((double(m*r))/n)<<endl;
 
    }
    return 0;
}