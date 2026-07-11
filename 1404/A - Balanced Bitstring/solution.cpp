#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    auto force = [&](int i,int x){
        if(x!=0 && x!=1){
            return true;
        }
        if(s[i]!='?' && s[i]!=('0'+x))return false;
        s[i]=('0'+x);
        return true;
    };
    for(int i=k;i<n;i++){
        if(s[i]=='?'){
            if(!force(i,s[i-k]-'0'))return void(cout<<"NO
");
        }
        else if(!force(i-k,s[i]-'0'))return void(cout<<"NO
");
    }
    for(int i=n-1;i>(k-1);i--){
        if(s[i-k]=='?'){
            if(!force(i-k,s[i]-'0'))return void(cout<<"NO
");
        }
        if(!force(i,s[i-k]-'0'))return void(cout<<"NO
");
    }
    int n_0=0,n_1=0,n_=0;
    for(int i=0;i<k;i++){
        if(s[i]=='0')n_0++;
        else if(s[i]=='1')n_1++;
        else n_++;
    }
    if(n_0 > k/2 || n_1 > k/2)
    cout << "NO
";
    else
    cout << "YES
";
}
 
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}