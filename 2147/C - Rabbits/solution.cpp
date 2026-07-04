#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    //finding for 11011
   // Option 1: Cast to int (Safe for competitive programming inputs < 2e9)
    for(int i=0; i < (int)s.size() - 4; i++) {
        string s1 = s.substr(i, 5);
        if(s1 == "11011") return void(cout << "NO
");
    }
    //findign 1010101010101010.....1 sequence in the string
 
    int i=0;
    vector<pair<int,int>> vec;
    while(i<n){
        //cout<<i<<" "<<n<<" "<<s[i]<<endl;
        while(i<n && s[i]=='0')i++;
        int a , b;
        a=i;
        while(i<n-1 && s[i]!=s[i+1])i++;
        b=i;
        if(a!=b && s[b]=='1')vec.push_back({a,b});
        if(s[i]=='1') while(i<n-1 && s[i+1]!='0')i++;
        //cout<<i<<endl;
        if(i==n-1){
            i++;
        }
        //cout<<i<<endl;
    }
    for(auto it:vec){
        //cout<<it.first<<" "<<it.second<<endl;
        int f__0=it.second-it.first;
        f__0/=2;
        if(f__0%2==0)continue;
        int a =it.first,b=it.second;
        if(a==0 && b==n-1)return void(cout<<"NO
");
        if(a==0 && s[b+1]=='1')return void(cout<<"NO
");
        if(a>0 && s[a-1]=='1' && b==n-1)return void(cout<<"NO
");
        if(a>0 && b<n-1 && s[a-1]=='1' && s[b+1]=='1')return void(cout<<"NO
");
    }
    cout<<"YES
";
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}