#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,c;
    cin>>n>>c;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int ans_1=0;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            ans_1=INT_MAX;
            break;
        }
        ans_1+=a[i]-b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans_2=c;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            ans_2=INT_MAX;
            break;
        }
        ans_2+=a[i]-b[i];
    }
    int ans = min(ans_1,ans_2);
    if(ans==INT_MAX)return void(cout<<-1<<endl);
    cout<<ans<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}