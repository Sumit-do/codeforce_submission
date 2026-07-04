#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='0' && s[1]=='1'){
        cout<<"NO
";
        return ;
    }
    if(s[s.size()-2]=='1' && s[s.size()-1]=='0'){
        cout<<"NO
";
        return  ;
    }
    int i=0;
    while(i<s.size()){
        if((i+2)<s.size()){
            string t = s.substr(i,3);
            if(t=="101"){
                cout<<"NO
";
                return ;
            }
        }
        i++;
    }
    vector<pair<int,int>> location;
    vector<int> vec(n,0);
    fr(i,n) vec[i]=i+1;
    int kl=0;
    while(kl<s.size()){
        if(s[kl]=='0'){
            int a = kl;
            while(s[kl]=='0'){
                kl++;
            }
            int b=kl;
            sort(vec.begin()+a,vec.begin()+b,greater<int>());
        }
        kl++;
    }
    cout<<"YES
";
    fr(i,n) cout<<vec[i]<<" ";
    cout<<endl;
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--){
      solve();
    }
    return 0;
}