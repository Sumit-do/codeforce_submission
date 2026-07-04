#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    if(k==1)return void(cout<<"YES
");
    vector<int> ve=vec;
    sort(ve.begin(),ve.end());
    int x = ve[k-2];
    vector<int> b;
    int count_x=0;
    for(int i=0;i<n;i++){
        if(vec[i]==x)count_x++;
        if(vec[i]<=x)b.push_back(vec[i]);
    }
    int skip_count_x=0;
    int i=0,j=b.size()-1;
    while(i<=j){
        if(b[i]==b[j]){
            i++;
            j--;
        }
        else{
            if(b[i]==x)i++;
            else if(b[j]==x)j--;
            else return void(cout<<"NO
");
            skip_count_x++;
        }
    }
    if(b.size()-skip_count_x < k-1)return void(cout<<"NO
");
    cout<<"YES
";
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}