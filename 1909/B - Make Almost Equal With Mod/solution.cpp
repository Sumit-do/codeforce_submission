#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
void solve(){
    int n;
    cin >> n;
    vector<ll> vec(n);
    fr(i,n) cin >> vec[i];
    bool flag = true;
    int l = -1;
    while(flag && l < 62){  // avoid shifting by 64
        l++;
        ll bit_mask = (1LL << (l+1)) - 1;   // 1LL instead of 1
        ll compare = vec[0] & bit_mask;
        fr(i,n){
            if((vec[i] & bit_mask) != compare){
                flag = false;
                break;
            }
        }
    }
 
    int k = -1;
    flag = true;
    while(flag && k < 62){  // avoid shifting by 64
        k++;
        ll bit_mask = (1LL << (k+1)) - 1;   // 1LL instead of 1
        ll compare = vec[0] & bit_mask;
        fr(i,n){
            if((vec[i] & bit_mask) != compare){
                flag = false;
                break;
            }
        }
    }
 
    l = max(k,l);
    cout << (1LL << (l+1)) << endl;  // 1LL instead of 1
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}