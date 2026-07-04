#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
 
bool camp(pair<ll,ll> sample1,pair<ll,ll> sample2){
    if(sample1.first>sample2.first){
        return true;
    }
    else if(sample1.first<sample2.first){
        return false;
    }
    if(sample1.second>sample2.second){
        return true;
    }
    return false;
 
}
 
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ttt;
                cin>>ttt;
                mat[i][j] = ttt;
            }
        }
        vector<pair<ll,ll>> container;
        for(int i=0;i<n;i++){
            vector<ll> temp;
            ll pre_sum=0;
            for(int j=0;j<m;j++){
                pre_sum += mat[i][j];
                temp.push_back(pre_sum);
            }
            ll lamda = temp.back();
            ll beta=0;
            for(int j=0;j<m;j++){
                beta += temp[j];
            }
            container.push_back({lamda,beta});
        }
        sort(container.begin(),container.end(),camp);
        ll result =0;
        int x=0;
        for(auto it:container){
            result += it.first * (1LL * m * (n - 1 - x)) + it.second;
            x++;
        }
        cout<<result<<"
";
    }
    return 0;
}