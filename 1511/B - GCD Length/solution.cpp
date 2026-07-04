#include<bits/stdc++.h>
using namespace std;
 
bool is_prime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
 
long long int f(long long int x){
    while(true){
        if(is_prime(x)) return x;
        x++;
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        long long int min_c=pow(10,c-1);
        long long int next_prime = f(min_c);
        long long int check = pow(10,a-1);
        long long int check1 = pow(10,b-1);
        while((next_prime%check)==next_prime){
            next_prime *= 2;
        }
        long long int x = next_prime;
        next_prime = f(min_c);
        while((next_prime%check1)==next_prime){
            next_prime *= 3;
        }
        long long int y = next_prime;
 
        cout<<x<<" "<<y<<endl;
 
    }
    return 0;
}