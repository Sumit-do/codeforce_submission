#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        unordered_set<int> mpp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int t = arr[i]+arr[j];
                mpp.insert(t);
            }
        }
        sort(arr.begin(),arr.end());
        int result1 =0;
        for(auto it:mpp){
            int result=0;
            int ptr1=0,ptr2=n-1;
            while(ptr1<ptr2){
                if(arr[ptr1] + arr[ptr2] == it){
                    result++;
                    ptr1++;
                    ptr2--;
                }
                else if(arr[ptr1] + arr[ptr2] < it){
                    ptr1++;
                }
                else{
                    ptr2--;
                }
            }
            result1 = max(result1,result);
        }
        
        
        
        cout<< result1<<'
';
 
    }
    return 0;
}