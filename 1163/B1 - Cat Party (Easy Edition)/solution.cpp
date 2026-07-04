#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    int x=1;
    vector<int> freq(11,0);
    fr(i,n){
        freq[vec[i]]++;
        set<int> s;
        for(int i=1;i<=10;i++){
            if(freq[i])s.insert(freq[i]);
        }
        if(s.size()==1 && freq[vec[i]]==1)x=i+1;
        bool flag = false;
        for(int j=1;j<=10;j++){
            if(freq[j]==i+1)flag=true;
        }
        if(s.size()==1 && flag)x=i+1;
        if(s.size()==2){
            auto it=s.begin();
            int small = *it;
            it++;
            int large=*it;
            int num_major=0,num_minor=0;
            for(int i=1;i<=10;i++){
                if(freq[i]==large)num_major++;
                else if(freq[i]==small) num_minor++;
            }
            if(num_minor>num_major && num_major==1 && large-small==1)x=i+1;
            //if(num_major==num_minor && )
            if(num_major>num_minor && num_minor==1 && small==1 )x=i+1;
            if(num_major==num_minor && num_major==1 && large-small==1)x=i+1;
        }
    }
    cout<<x<<endl;
}
 
int main(){
    int t=1;
    //cin >> t;
    while(t--) solve();
    return 0;
}