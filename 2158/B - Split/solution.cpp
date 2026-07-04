#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
int g(int x){
    if(x<0)return -1*x;
    return x;
}
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(2*n);
    vector<int> freq(4,0);
    map<int,int> mpp;
    fr(i,2*n){
        cin>>vec[i];
        mpp[vec[i]]++;
    }
    for(auto it:mpp){
        freq[it.second%4]++;
    }
    /*if(n%2==1){
         int ans = ((2*freq[0])%4);
        int ans2 = g(freq[1]+freq[3])%2;
        int fin_ans = 2*freq[2]+2*freq[0]+freq[1]+freq[3]-2*g((freq[0]+freq[2])%2);
        cout<<fin_ans<<endl;
        return;
    }*/
    int ans = 2*((freq[0])%2);
    int ans2 = (freq[1]+freq[3])%2;
    if(freq[0]%2==1 && (freq[1]+freq[3])>0 && (freq[1]+freq[3])%2==0){
        cout<<2*freq[2]+2*freq[0]+freq[1]+freq[3]<<endl;
        return;
    }
    int fin_ans = 2*freq[2]+2*freq[0]+freq[1]+freq[3]-g(ans-ans2);
    //cout<<ans<<" ";
    cout<<fin_ans<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}