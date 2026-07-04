#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
bool cat(pair<int,int>a,pair<int,int>b){
    if(a.second==0 && b.second!=0) return true;
    if(a.second!=0 && b.second==0) return false;
    if(a.second==0 && b.second==0){
        if(a.first<b.first) return true;
        return false;
    }
    if(a.first<b.first){
        return true;
    }
    if(a.first==b.first){
        if(a.second<b.second) return true;
        return false;
    }
    return false;
}
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> vec(n);
    map<int,int> mpp;
    fr(i,n) {
        cin>>vec[i];
        mpp[vec[i]]++;
    }
    vector<pair<int,int>> vec1(m);
    fr(i,m){
        int a;
        cin>>a;
        vec1[i].first=a;
        //vec1[i].second=b;
    }
    fr(i,m){
        int b;
        cin>>b;
        //vec1[i].first=a;
        vec1[i].second=b;
    }
    sort(vec1.begin(),vec1.end(),cat);
    int i=0;
    while(i<m && vec1[i].second==0) i++;
    int  result=0;
    for(int j=i;j<m;j++){
        int health = vec1[j].first;
        //int return1 = vec1[j].second;
        auto it = mpp.lower_bound(health);
        if(it!=mpp.end()){
            result++;
            mpp[max(it->first,vec1[j].second)]++;
            (it->second)--;
            if(it->second==0){
                mpp.erase(it->first);
            }
        }
        else{
            break;
        }
    }
    for(int y=0;y<i;y++){
        int health = vec1[y].first;
        int give = 0;
        auto it = mpp.lower_bound(health);
        if(it!=mpp.end()){
            result++;
            mpp[it->first]--;
            if(it->second == 0){
                mpp.erase(it->first);
            }
        }
        else{
            break;
        }
    }
    cout<<result<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}