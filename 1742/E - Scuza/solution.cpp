// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<long long> vec(n),vec1(q);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<q;i++){
        cin>>vec1[i];
    }
    map<long long,long long> mpp;
    long long mmax = vec[0];
    long long sum =0;
    for(int i=0;i<n;i++){
        sum += vec[i];
        mmax = max(mmax,vec[i]);
        mpp[mmax]= sum ;
    }
    for(int i=0;i<q;i++){
        auto it = mpp.upper_bound(vec1[i]);
        if(it==mpp.begin()){
            cout<<0<<" ";
            continue;
        }
        it--;
        if(it->first <= vec1[i]){
            cout<<it->second<<" ";
            continue;
        }
        
    }
    cout<<endl;
}
 
 
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}