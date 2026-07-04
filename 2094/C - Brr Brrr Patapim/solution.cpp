#include<bits/stdc++.h>
using namespace std;
 
int f( double d){
    if(d!=(int)d){
        return int(d)+1;
    }
    return int(d);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> mat;
        int sum =0;
        for(int i=0;i<n;i++ ){
            for(int j=0;j<n;j++){
                int temp;
                cin>>temp;
                
                if(i==0 || j==(n-1)){
                    mat.push_back(temp);
                    sum += temp;
                }
 
            }
        }
        int num1 = ((2*n)*(2*n+1)/2)-sum;
        cout<<num1<<" ";
        for(auto it:mat){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}