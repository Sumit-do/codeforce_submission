#include<bits/stdc++.h>
#include<vector>
 
using namespace std;
 
bool f(vector<int> array , int target , int distinct){
        for(int i=0;i<distinct;i++){
            if(array[i]==target){
                return true;
            }
        }
        return false;
}
 
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> array;
    for(int i=0;i<n;i++){
        int temp ;
        cin>>temp;
        array.push_back(temp);
    }
    vector<int> index;
    vector<int> distinct1;
    int distinct =0;
    for(int i=0;i<n;i++){
        if(i==0){
            distinct++;
            index.push_back(i);
            distinct1.push_back(array[i]);
            continue;
        }
        if(!f(distinct1,array[i],distinct)){
            distinct++;
            index.push_back(i);
            distinct1.push_back(array[i]);
            continue;
        }
    }
    if(distinct>=k){
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++){
            cout<<index[i]+1<<" ";
        }
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}