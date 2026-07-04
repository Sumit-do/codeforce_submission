#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
 
long long int min(long long int a ,long long int b){
    if(a>=b){
        return b;
    }
    return a;
}
bool f(long long int mid,vector<long long int> & input,long long int h){
    long long int sum=0;
    for(long long int i=0;i<input.size();i++){
        if(i==(input.size()-1)){
            sum += mid;
            if(sum>=h){
                return true;
            }
            return false;
        }
        sum += min((input[i+1]-input[i]),mid);
 
    }
}
 
long long int  f1(long long int in,long long int fn,long long int h,vector<long long int> &input){
    long long mid = (in+fn)/2;
    if(in>=fn){
        if(f(mid,input,h)){
            return mid;
        }
        return mid+1;
    }
    if(f(mid,input,h)){
        return f1(in,mid-1,h,input);
    }
    return f1(mid+1,fn,h,input);
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int h;
        cin>>h;
        vector<long long int> input(n);
        fr(i,n){
            cin>>input[i];
        }
        cout<<f1(1,h,h,input)<<"
";
    }
    return 0;
}