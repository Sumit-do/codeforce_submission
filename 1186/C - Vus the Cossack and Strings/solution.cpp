#include<bits/stdc++.h>
#include<string>
 
using namespace std;
 
int main(){
  
        string a,b;
        cin>>a;
        cin>>b;
        int size_a = a.size();
        int size_b = b.size();
        int sum_of_b = 0;
        for(int i=0;i<size_b;i++){
            sum_of_b += (int)(b[i]-'0');
        }
        int h = ((size_a)-(size_b-1));
        int array[h];
        int array1[size_a];
        int sum1=0;
        for(int i=0;i<size_a;i++){
            sum1 += (int)(a[i]-'0');
            array1[i] = sum1;
        }
        for(int i=0;i<h;i++){
            array[i]=(array1[i+(size_b-1)]-array1[i]) + (int)(a[i]-'0');
        }
        int result =0;
        for(int i=0;i<h;i++){
            result += ((sum_of_b + array[i])%2)^1;
        }
        cout<<result<<endl;
    
    return 0;
}