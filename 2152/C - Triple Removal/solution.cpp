#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
bool is_contained(map<pair<int, int>, int>& pa, int l, int r) {
    if (pa.empty()) return false;
 
    // 1. Find the first range starting AFTER l
    auto it = pa.upper_bound({l, INT_MAX});
 
    // 2. If it is the beginning, then ALL ranges start after l
    if (it == pa.begin()) return false;
 
    // 3. Move back to find the range starting <= l
    it--; 
 
    // 4. Check if this range actually covers [l, r]
    // The key is a pair {start, end}, so it->first.first is L, it->first.second is R
    int range_L = it->first.first;
    int range_R = it->first.second;
 
    if (range_R >= r) {
        return true; // Found a containing range
    }
    
    return false;
}
 
 
void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<int> freq_0(n,0),freq_1(n,0);
    if(vec[0]==0)freq_0[0]=1;
    else freq_1[0]=1;
    for(int i=1;i<n;i++){
        if(vec[i]==0){
            freq_0[i]=freq_0[i-1]+1;
            freq_1[i]=freq_1[i-1];
        }
        else{
            freq_1[i]=freq_1[i-1]+1;
            freq_0[i]=freq_0[i-1];
        }
    }
    //finding danger zone
    map<pair<int,int>,int> pa;
    map<int,int> L,R;
    int i=0;
    //int curr=vec[i];
    int l=0;
    while(i<n-1){
        while(i<n-1 && vec[i]!=vec[i+1]){
            i++;
            //curr=vec[i];
            //r++;
        }
        if(i>l && (i-l+1)>=3){
            pa[{l+1,i+1}]++;
            L[l+1]++;
            R[i+1]++;
        }
        while(i<n-1 && vec[i]==vec[i+1])i++;
        l=i;
        //i++;
    }
    //for(auto it:pa){
       // cout<<it.first.first<<" "<<it.first.second<<endl;
    //}
    fr(i,q){
        int l,r;
        cin>>l>>r;
        if(r-l+1 < 3){
            cout<<-1<<endl;
            continue;
        }
        int f_0 = freq_0[r-1]-freq_0[l-1];
        int f_1 = freq_1[r-1]-freq_1[l-1];
        if(vec[l-1]==0)f_0++;
        else f_1++;
        if(f_1%3!=0 || f_0%3!=0){
            cout<<-1<<endl;
            continue;
        }
        //bool flag = true;
        
        if(!is_contained(pa,l,r))cout<<(f_0/3)+(f_1/3)<<endl;
        else{
            int y = (r-l-2)/3 + 2;
            cout<<y<<endl;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}