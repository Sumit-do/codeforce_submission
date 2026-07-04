#include<bits/stdc++.h>
 
using namespace std;
 
long long int f(long long int a , long long int b,long long int x,long long int y){
    if(a==b){
        return 0;
    }
    if(a<b){
        if(x<=y){
            return (b-a)*x;
        }
        else{
            long long int cost =0;
            long long int l = b-a+1;
            long long int even_step=0,odd_steps=0;
            if(l%2==1){
                if(a%2==0){
                    even_step=(l-1)/2;
                    odd_steps=(l-1)/2;
                }
                else{
                    even_step=(l-1)/2;
                    odd_steps=(l-1)/2;
                }
            }
            else{
                if(a%2==1){
                    odd_steps=l/2;
                    even_step=l/2-1;
                }
                else{
                    even_step=l/2;
                    odd_steps=l/2-1;
                }
            }
            cost = odd_steps*x+even_step*y;
            return cost;
        }
    }
    if((a-b)==1 && a%2==1){
        return y;
    }
    return -1;
}
 
int main(){
    int t;
    cin>>t;
while(t--){
    long long int a,b,x,y;
    cin>>a>>b>>x>>y;
    cout<<f(a,b,x,y)<<endl;
    
}
    return 0;
}