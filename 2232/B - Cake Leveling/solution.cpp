#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    cout<<vec[0]<<" ";
    long long prev=vec[0];
    for(int i=1;i<n;i++){
        vec[i]+=vec[i-1];
        long long exp_lev = vec[i]/(i+1);
        if(exp_lev>=prev){
            cout<<prev<<" ";
        }
        else{
            cout<<exp_lev<<" ";
            prev=exp_lev;
        }
    }
    cout<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}