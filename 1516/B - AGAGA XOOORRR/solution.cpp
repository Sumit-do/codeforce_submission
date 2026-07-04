#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
 
 
 
bool f(vector<int> vec,int suspect){
    int n=vec.size();
    vector<int> indices;
    int curr_x=0;
    for(int i=0;i<vec.size();i++){
        if((curr_x^vec[i])==suspect){
            curr_x=0;
            indices.push_back(i);
        }
        else{
            curr_x ^= vec[i];
        }
    }
    //now we will check all given indices
    if(indices.size()>1 && curr_x==0){
        int x=0,test=0;
        bool flag = true;
        fr(i,indices.size()){
            while(x<=indices[i]){
                test ^=vec[x];
                x++;
            }
            if(test==suspect){
                test=0;
            }
            else{
                flag=false;
            }
        }
        int check=0;
        /*if(indices.size()>0 && (indices[indices.size()-1]+1)<n)check=vec[indices[indices.size()-1]+1];*/
        if(indices.size()>0){
            int check=0;
            for(int i=indices[indices.size()-1]+1;i<n;i++){
                check ^=vec[i];
            }
            if(check!=0){
                flag = false;
            }
        }
        /*if(indices.size()>0 && (indices[indices.size()-1]+1)<n && ((n-1)-indices[indices.size()-1]%2==1)){
            flag = false;
        }*/
        return flag;
    }
    return false;
}
 
 
 
 
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    int x=0;
    fr(i,n){
        cin>>vec[i];
        x ^=vec[i];
    }
    if(x!=0){
        if(f(vec,x)){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
    else{
        bool flag=false;
        int k=0;
        fr(i,n){
            k ^=vec[i];
            if(f(vec,k)){
                flag=true;
            }
        }
        if(flag){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
    /*vector<int> vec={3,3,3,2,2};
    if(f(vec,3)){
        cout<<"Yes
";
    }
    else{
        cout<<"No
";
    }*/
}