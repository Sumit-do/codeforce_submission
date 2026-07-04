#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
 
void solve() {
    int n;
    cin>>n;
    vector<string> mat(n);
    for(int i=0;i<n;i++){
        cin>>mat[i];
    }
    int result =0;
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n/2;j++){
            int a =0;
            int ai=i,aj=j;
            a += mat[ai][aj]-'0';
            int temp = ai;
            ai = aj;
            aj = n-1-temp;
            a += mat[ai][aj]-'0';
            temp = ai;
            ai = aj;
            aj = n-1-temp;
            a += mat[ai][aj]-'0';
            temp = ai;
            ai = aj;
            aj = n-1-temp;
            a += mat[ai][aj]-'0';
 
            result += min(a,4-a);
        }
    }
    cout<<result<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}