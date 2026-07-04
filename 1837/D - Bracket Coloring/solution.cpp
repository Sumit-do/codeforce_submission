#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> vec(n);
    if(s[0]=='('){
        vec[0]=1;
    }
    else vec[0]=-1;
 
    for(int i=1;i<n;i++){
        if(s[i]=='('){
            vec[i]=vec[i-1]+1;
        }
        else{
            vec[i]=vec[i-1]-1;
        }
    }
    if(vec[n-1]!=0){
        cout<<-1<<endl;
        return;
    }
    vector<int> ref(n);
    int c1=0,c2=0;
    fr(i,n){
        if(vec[i]>0) {ref[i]=1;c1++;}
        else if(vec[i]<0) {ref[i]=2;c2++;}
        else{
            if(vec[i-1]<0){ref[i]=2;c2++;}
            else {ref[i]=1;c1++;}
        }
    }
    if(c1*c2){
        cout<<2<<endl;
        fr(i,n) cout<<ref[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<1<<endl;
        fr(i,n) cout<<1<<" ";
        cout<<endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}