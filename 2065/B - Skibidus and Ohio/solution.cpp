#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        bool flag = true;
        if(n==1){
            cout<<1<<'
';
            continue;
        }
        for(int i=n-1;i>=1;i--){
            if(s[i]==s[i-1]){
                cout<<1<<'
';
                flag = false;
                break;
            }
        }
        if(flag){cout<<n<<'
';}
    }
    return 0;
}