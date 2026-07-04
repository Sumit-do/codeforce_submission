#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int n;
    cin>>n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    ll curr_sum=0,k=-1;
    vector<ll> answer;
    for(int i=0;i<35;i++){
        ll maxx=curr_sum;
        for(int j=0;j<n;j++){
            if(vec[j]!=-1 && ( (curr_sum|vec[j]) > maxx) ){
                maxx=curr_sum|vec[j];
                k=j;
            }
        }
        if(vec[k]!=-1){
            curr_sum |= vec[k];
            answer.push_back(vec[k]);
            vec[k]=-1;
        }
    }
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<' ';
    }
    for(int i=0;i<n;i++){
        if(vec[i]!=-1){
            cout<<vec[i]<<' ';
        }
        
    }
    cout<<endl;
}
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}