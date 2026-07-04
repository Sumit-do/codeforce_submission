#include <iostream>
#include <vector>
 
using namespace std;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> f(n+1,0);
    fr(i,n){
        cin>>vec[i];
    }
    ll sum=0;
    fr(i,n){
        sum+=vec[i];
        f[vec[i]]++;
        if(i==0)vec[i]=0;
        else{
            if(f[vec[i]]>=2 && vec[i]>vec[i-1])vec[i]=vec[i];
            else vec[i]=vec[i-1];
            //cout<<f[vec[i]]<<" "<<vec[i]<<endl;
        }
    }
    int last=0;
    //fr(i,n)cout<<vec[i]<<" ";
    //cout<<endl;
    fr(i,n){
        sum+=vec[i];
        if(i>0 && vec[i-1]!=vec[i]){
            //vec[i]=last;
            sum+=(ll)last*(n-i);
            //cout<<last<<" ";
        }
        else if(i>0 && vec[i-1]==vec[i]){
            last=vec[i];
            sum+=(ll)last*(n-i);
            //cout<<last<<" ";
        }
        
    }
    //cout<<endl;
    //fr(i,n)cout<<vec[i]<<" ";
    //cout<<endl;
    cout<<sum<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //precompute();
    int t;
    cin >> t;
    while(t--) solve();
}