#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
// --- THE ONLY CHANGE IS ADDING "const" and "&" HERE ---
int bin(const vector<ll>& vec, ll target, int in, int fn) {
    if (in > fn) {
        return -1;
    }
 
    int mid = in + (fn - in) / 2;
 
    if (vec[mid] < target) {
        int better_answer = bin(vec, target, mid + 1, fn);
        if (better_answer != -1) {
            return better_answer;
        }
        return mid;
    } else {
        return bin(vec, target, in, mid - 1);
    }
}
 
 
void solve() {
    int n;
    cin>>n;
    vector<ll> vec(n);
    vector<int> result(n);
    fr(i,n) cin>>vec[i];
    vector<ll> right_minimest(n);
    ll minn = LLONG_MAX;
    for(int i=n-1;i>=0;i--){
        minn = min(minn,vec[i]);
        right_minimest[i]=minn;
    }
    
    fr(i,n){
        // Now this call is fast because it doesn't copy the vector
        int mm=bin(right_minimest,vec[i],i+1,n-1); 
        if(mm!=-1){
            result[i]=(mm-i-1);
        }
        else{
            result[i]=-1;
        }
    }
    fr(i,n) cout<<result[i]<<' ';
    cout<<endl;
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}