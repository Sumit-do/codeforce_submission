#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string a,b;
    cin >> a >> b;
    int n1 = a.size(), n2 = b.size();
 
    if(a[0] == b[0]){
        cout << "YES
";
        cout << string(1, a[0]) + "*
";
        return;
    }
 
    if(a[n1-1] == b[n2-1]){
        cout << "YES
";
        cout << "*" + string(1, a[n1-1]) << "
";
        return;
    }
 
    for(int i = 0; i < n1 - 1; i++){
        string curr = string(1, a[i]) + string(1, a[i+1]);
        for(int j = 0; j < n2 - 1; j++){
            string to_c = string(1, b[j]) + string(1, b[j+1]);
            if(curr == to_c){
                cout << "YES
";
                cout << "*" + curr + "*
";
                return;
            }
        }
    }
 
    cout << "NO
";
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}