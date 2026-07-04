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
      sort(m1.begin(),m1.end());
      //auto it = lower_bound(m1.begin(), m1.end(), n1[0]);
      //int indx_0 = it - m1.begin();
 
      bool flag = true;
      int test = min(n1[0],m1[0]-n1[0]);
      /*if(indx_0<m){
         test = min(n1[0],m1[indx_0]-n1[0]);
      }
      else{
        test = n1[0];
      }*/
      for(int i=1;i<n;i++){
        int to_search = test + n1[i];
        auto it = lower_bound(m1.begin(), m1.end(), to_search);
        int index = it - m1.begin();
        if(index<m){
            if(n1[i]>=test && n1[i]<(m1[index]-n1[i])){
                test = n1[i];
            }
            else{
                test = m1[index]-n1[i];
            }
        }
        else{
            if(n1[i]>=test){
                test = n1[i];
            }
            else{
                flag = false;
                break;
            }
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
    return 0;
}