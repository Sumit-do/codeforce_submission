#include<bits/stdc++.h>
using namespace std;
 
long long mergeCount(vector<int>& a, int l, int r) {
    if (l >= r) return 0;
 
    int mid = (l + r) / 2;
    long long inv = 0;
 
    inv += mergeCount(a, l, mid);
    inv += mergeCount(a, mid + 1, r);
 
    vector<int> temp;
    int i = l, j = mid + 1;
 
    while (i <= mid && j <= r) {
        if (a[i] < a[j]) {
            temp.push_back(a[i++]);
        } else {
            temp.push_back(a[j++]);
            inv += (mid - i + 1); 
        }
    }
 
    while (i <= mid) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);
 
    for (int k = l; k <= r; k++)
        a[k] = temp[k - l];
 
    return inv;
}
 
long long inversionCount(vector<int> a) {
    return mergeCount(a, 0, (int)a.size() - 1);
}
 
 
void solve(){
    int n;cin>>n;
    vector<pair<int,int>>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i].first>>vec[i].second;
    sort(vec.begin(),vec.end());
    vector<int> temp;
    for(int i=0;i<n;i++)temp.push_back(vec[i].second);
    cout<<inversionCount(temp)<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}
 