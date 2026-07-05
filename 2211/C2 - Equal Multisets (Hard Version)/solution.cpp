#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
 
    auto assign = [&](int idx, int val) {
        if(b[idx] != -1 && b[idx] != val) return false;
        b[idx] = val;
        return true;
    };
 
 
    for(int i=k; i<n; i++){
        if(a[i] != a[i-k]){
            if(!assign(i, a[i]) || !assign(i-k, a[i-k])) return void(cout << "NO
");
        }
    }
 
    for(int i=k; i<n; i++){
        if(a[i] == a[i-k] && b[i-k] != -1){
            if(!assign(i, b[i-k])) return void(cout << "NO
");
        }
    }
 
    for(int i=n-1; i>=k; i--){
        if(a[i] == a[i-k] && b[i] != -1){
            if(!assign(i-k, b[i])) return void(cout << "NO
");
        }
    }
 
    map<int, int> mpp;
    for(int i=0; i<k; i++) mpp[a[i]]++;
    for(int i=0; i<k; i++){
        if(b[i] != -1){
            if(mpp[b[i]] == 0) return void(cout << "NO
");
            mpp[b[i]]--;
        }
    }
    
    cout << "YES
";
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}