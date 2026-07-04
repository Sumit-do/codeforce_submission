#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
int f(int a,int b,int a1,int b1){
    if(a!=b && a1!=b1) return 0;
    if(a==b && b1==a1){
        if(a==a1) return 2;
        return 0;
    }
    else if(a==b){
        if(a==a1 || a==b1) return 1;
        return 0;
    }
    else{
        if(a1==a || a1==b) return 1;
        return 0;
    }
}
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n) cin>>vec[i];
    int ans = 0;
    if(n%2==1){
        int k=n/2+1;
        for(int i=1;i<=k;i++){
            int a = vec[i-1],b=vec[n-i];
            if((i+1)<k){
                int a1=vec[i],b1=vec[n-i-1];
                ans += f(a,b,a1,b1);
                //cout<<ans<<endl;
            }
            else{
                int boss = vec[k-1];
                //cout<<boss<<" "<<a<<" "<<b<<" ";
                if(a==b){
                    if(a==boss) ans +=2;
                    //cout<<ans<<endl;
                }
                else{
                    if(a==boss || b==boss) ans+=1;
                    //cout<<ans<<endl;
                }
                break;
            }
        }
    }
    else{
        int k=n/2;
        for(int i=1;i<=k;i++){
            int a = vec[i-1],b = vec[n-i];
            if(i!=k){
                int a1=vec[i],b1=vec[n-i-1];
                ans += f(a,b,a1,b1);
            }
            else{
                if(a==b) ans+=1;
            }
        }
    }
    cout<<ans<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}