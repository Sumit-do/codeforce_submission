#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<long long> vec(n);
    map<long long, int> mpp;
    
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        mpp[vec[i]] = i + 1;
    }
    
    
    if(m > n / 2) return void(cout << -1 << "
");
    
    sort(vec.begin(), vec.end());
    vector<pair<int, int>> ans;
    
    if(m == 0){
        long long sum = 0;
        int k = -1;
        
        
        for(int i = 0; i <= n - 3; i++){
            sum += vec[i];
            if(sum >= vec[n-1] - vec[n-2]){
                k = i;
                break;
            }
        }
        
        if(k == -1) return void(cout << -1 << "
");
        
        for(int i = 0; i <= k; i++){
            ans.push_back({mpp[vec[i]], mpp[vec[n-1]]});
        }
        for(int i = k + 1; i < n - 2; i++){
            ans.push_back({mpp[vec[i]], mpp[vec[i+1]]});
        }
        ans.push_back({mpp[vec[n-2]], mpp[vec[n-1]]});
        
    } else {
        for(int i = 0; i < n - 2 * m; i++){
            ans.push_back({mpp[vec[i]], mpp[vec[i+1]]});
        }
        for(int i = 0; i < m; i++){
            ans.push_back({mpp[vec[n - m + i]], mpp[vec[n - 2 * m + i]]});
        }
    }
    
    cout << ans.size() << "
";
    for(auto p : ans){
        cout << p.first << " " << p.second << "
";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}