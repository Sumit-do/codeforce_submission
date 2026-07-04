#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve() {
    int n;
    cin>>n;
    vector<int>vec(n);
    fr(i,n)cin>>vec[i];
    if(n%2==0){
        fr(i,n){
            if(i%2==0)cout<<pow(-1,i)*(vec[i+1])<<" ";
            else cout<<pow(-1,i)*(vec[i-1])<<" ";
        }
        cout<<endl;
    }
    else{
        fr(i,n-3){
            if(i%2==0)cout<<pow(-1,i)*(vec[i+1])<<" ";
            else cout<<pow(-1,i)*(vec[i-1])<<" ";
        }
        if((vec[n-2]-vec[n-1])==0 || (vec[n-1]-vec[n-3])==0 || (vec[n-3]-vec[n-2])==0 ){
            map<int,int> mpp;
            for(int i=n-3;i<n;i++)mpp[vec[i]]++;
            int a=1;
            bool flag=false;
            for(auto it:mpp){
                if(it.second>=2)a=it.first;
                if(it.second==3)flag=true;
            }
                if(flag){
                    cout<<a<<" "<<a<<" "<<-2*a<<endl;
                }
                else{
                    int b=1;
                    for(int i=n-3;i<n;i++){
                        if(vec[i]!=a)b=vec[i];
                    }
                    for(int i=n-3;i<n;i++){
                        if(vec[i]==a)cout<<b<<" ";
                        else cout<<-2*a<<" ";
                    }
                    cout<<endl;
                }
                return;
        }
        cout<<(vec[n-2]-vec[n-1])<<" "<<(vec[n-1]-vec[n-3])<<" "<<(vec[n-3]-vec[n-2])<<" ";
        cout<<endl;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
}