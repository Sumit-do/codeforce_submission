#include<bits/stdc++.h>
using namespace std;
 
 
 
void solve(){
    int n;
    cin>>n;
    set<int> s;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s.insert(temp);
        vec.push_back(temp);
    }
    int result = INT_MAX;
        for(int i=1;i<n;i++){
            int tt=vec[i]^vec[0];
            set<int> j1;
            for(int j=0;j<n;j++){
                j1.insert(tt^vec[j]);
            }
            if(j1==s){
                result = min(result,tt);
            }
        }
        if(result!=2147483647){
            cout<<result<<endl;
        }
        else{
            cout<<-1<<endl;
        }
}
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}