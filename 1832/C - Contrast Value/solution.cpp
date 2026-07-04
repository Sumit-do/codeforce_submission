#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve() {
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n) cin>>vec[i];
    int res=n,i=0;
    while(i<(n-1)){
        if (vec[i]==vec[i+1]){
            int count = 0;
            while(i<(n-1) && vec[i]==vec[i+1]){
                count++;
                i++;
            }
            res -= (count);
        }
        
        else if(vec[i]<vec[i+1]){
            int count=0;
            while(i<(n-1) && vec[i]<=vec[i+1]){
                count++;
                i++;
            }
            res -= (count-1);
        }
        else if(vec[i]>vec[i+1]){
            int count =0;
             while(i<(n-1) && vec[i]>=vec[i+1]){
                count++;
                i++;
            }
            res -= (count-1);
        }
        /*else{
            int count = 0;
            while(i<(n-1) && vec[i]==vec[i+1]){
                count++;
                i++;
            }
            res -= (count);
        }*/
    }
    cout<<res<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}