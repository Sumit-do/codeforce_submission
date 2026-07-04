#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    fr(i, n) cin >> vec[i];
    
    map<int, vector<int>> mpp;
    fr(i, n) {
        mpp[vec[i]].push_back(i);
    }
 
    vector<pair<int, pair<int, int>>> v_p;
 
    for (int i = 1; i <= k; i++) {
        // Fix: check if color never appears
        if (mpp[i].empty()) {
            v_p.push_back({i, {n, n}});
            continue;
        }
 
        int maxx = 0, maxx1 = 0;
 
        // first gap before first occurrence
        maxx = mpp[i][0];
        //maxx1 = maxx;
 
        // gaps between consecutive same-color planks
        for (int j = 1; j < (int)mpp[i].size(); j++) {
            int temp = maxx;
            maxx = max(maxx, mpp[i][j] - mpp[i][j - 1] - 1);
            if (maxx == (mpp[i][j] - mpp[i][j - 1] - 1)) {
                maxx1 = temp;
            }
            else{
                maxx1 = max(maxx1,mpp[i][j] - mpp[i][j - 1] - 1);
            }
        }
 
        // gap after the last occurrence
        int temp1 = maxx;
        maxx = max(maxx, n - 1 - mpp[i].back());
        if (maxx == (n - 1 - mpp[i].back())) {
            maxx1 = temp1;
        }
        else{
            maxx1 = max(maxx1,n - 1 - mpp[i].back());
        }
        v_p.push_back({i, {maxx, maxx1}});
    }
 
    vector<int> res;
    fr(i, k) {
        // repaint halves the largest gap
        int ress = max(v_p[i].second.first / 2, v_p[i].second.second);
        res.push_back(ress);
    }
 
    int result = INT_MAX;
    fr(i, k) {
        result = min(result, res[i]);
    }
    cout << result << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}