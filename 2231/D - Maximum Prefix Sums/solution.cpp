#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; 
    cin>>n;
    string s; 
    cin>>s;
    vector<long long> a(n), c(n), orig_a(n);
    for(int i=0;i<n;i++) { 
        cin>>a[i]; 
        orig_a[i] = a[i]; 
    }
    for(int i=0;i<n;i++) cin>>c[i];
    for(int i=1;i<n;i++)if(c[i]<c[i-1])return void(cout<<"NO
");
    
    int prev=0; 
    long long ans=0;
    for(int i=0;i<n;i++){
        if(i==0){
            if(a[i]!=c[i] && s[0]=='1')return void(cout<<"NO
");
            a[i]=c[i]; 
            ans=0; 
            prev=0;
            continue;
        }
        if(c[i]!=c[i-1]){
            long long diff=c[i]-c[i-1];
            if(s[i]=='1'){
                ans+=a[i];
                int yy=i;
                while(yy>prev && s[yy]=='1') yy--;
                if(yy>prev) {
                    a[yy] += diff-ans;
                }
                else if(diff!=ans) return void(cout<<"NO
");
            }
            else {
                a[i]=diff-ans;
            }
            prev=i; 
            ans=0;
        }
        else {
            if(s[i]=='0') a[i]=-1e12;
            ans+=a[i];
        }
    }
    
    long long sum=0, mx=-4e18;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && orig_a[i]!=a[i]) return void(cout<<"No
");
        sum+=a[i]; 
        mx=max(mx, sum);
        if(mx!=c[i]) return void(cout<<"No
");
    }
    
    cout<<"Yes
";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"
";
}
 
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t; 
    cin>>t; 
    while(t--) solve();
    return 0;
}