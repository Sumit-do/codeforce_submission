#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n;
      cin>>m;
      vector<int> n1,m1;
      for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        n1.push_back(temp);
      }
      for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        m1.push_back(temp);
      }
      vector<int> cmp;
      for(int i=0;i<n;i++){
        cmp.push_back(m1[0]-n1[i]);
      }
      bool flag = true;
      int test = min(n1[0],cmp[0]);
      for(int i=1;i<n;i++){
        if(test>min(n1[i],cmp[i]) && test<=max(n1[i],cmp[i])){
            test = max(n1[i],cmp[i]);
            continue;
            //flag = false;
            //break;
        }
        else if(test>max(n1[i],cmp[i])){
            flag = false;
            break;
        }
        test = min(n1[i],cmp[i]);
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
    return 0;
}