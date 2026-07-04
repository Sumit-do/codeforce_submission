#include<bits/stdc++.h>
using namespace std;
 
#define FLOAT_TYPE long double
#define ll long long
 
 
int f(int x){
    int ans = 0;
    while(x>0){
        ans++;
        x/=10;
    }
    return ans;
}
int g(int x){
    int ans =0;
    while(x%10==0){
        ans++;
        x/=10;
    }
    return ans;
}
 
 
void solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> vec(n),vec1(n);
    int max_digit=0;
    for(int i=0;i<n;i++) {
        cin>>vec[i];
        max_digit += f(vec[i]);
        vec1[i]=g(vec[i]);
    }
    sort(vec1.begin(),vec1.end(),greater<int> ());
    int t_dlt=0;
    for(int i=0;i<n;i+=2){
        t_dlt += vec1[i];
    }
    if((max_digit-t_dlt)>=(m+1)){
        cout<<"Sasha
";
    }
    else{
        cout<<"Anna
";
    }
 
}
 
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}