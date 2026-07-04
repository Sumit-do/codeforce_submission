#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int>vec;
    for(int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    long long int g=vec[0];
    for(int i=1;i<(n);i++){
        g = __gcd(g,vec[i]);
    }
    int sum=0;
    for(long long int i=1;i<=pow(g,0.5);i++){
        if(g%i==0){
            if(i!=sqrt(g)){
                sum += 2;
            }
            else{
                sum++;
            }
        }
    }
    cout<<sum<<"
";
    return 0;
}