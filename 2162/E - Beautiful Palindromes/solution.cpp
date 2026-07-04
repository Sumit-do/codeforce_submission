#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
   int n,k;
   cin>>n>>k;
   vector<int> vec(n);
   vector<int> freq(n+1,0);
   fr(i,n)cin>>vec[i];
    fr(i,n)freq[vec[i]]++;
    int kk=-1;
    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            kk=i;
            break;
        }
    }
    if(kk!=-1){
        int prev1=kk;
        int prev2=vec[n-1];
        cout<<kk<<" ";
        fr(i,k-1){
            int next=1;
            while(next==prev1 || next==prev2)next++;
            cout<<next<<" ";
            prev2=prev1;
            prev1=next;
        }
        cout<<endl;
    }
    else{
        int prev1=vec[n-1],prev2=vec[n-2];
        fr(i,k){
            int next=1;
            while(next==prev1 || next==prev2){
                next++;
            }
            cout<<next<<" ";
            prev2=prev1;
            prev1=next;
        }
        cout<<endl;
    }
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}