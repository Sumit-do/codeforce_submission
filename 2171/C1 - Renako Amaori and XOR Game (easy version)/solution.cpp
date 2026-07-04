#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    int ans_a =0,ans_b=0;
    bool is_a=false;
    fr(i,n){
        if(a[i]!=b[i] && i%2==0){
            ans_a++;
            is_a=true;
        }
        if(a[i]!=b[i] && i%2==1){
            ans_b++;
            is_a=false;
        }
    }
    //cout<<ans_a<<" "<<ans_b<<endl;
    if(ans_a+ans_b == 0){
        cout<<"Tie
";
        return;
    }
    if(is_a){
        if((ans_a+ans_b-1)%2==0){
            cout<<"Ajisai
";
        }
        else{
            cout<<"Tie
";
        }
    }
    else{
        if((ans_a+ans_b-1)%2==0){
            cout<<"Mai
";
        }
        else{
            cout<<"Tie
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l=1,r=2e5;
    //cin>>l>>r;
    
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}