#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
   map<string,int> list;
   int max_score=0;
   vector<string> candidates;
   vector<int>scores;
   while(n--){
    string s;
    cin>>s;
    candidates.push_back(s);
    int score;
    cin>>score;
    scores.push_back(score);
    list[s] += score;
   }
   for(auto it:list){
    max_score = max(max_score,it.second);
   }
   unordered_map<string,int> winners_tie;
   for(auto it:list){
    if(it.second==max_score){
        winners_tie[it.first]++;
    }
   }
   unordered_map<string,int> list2;
   for(int i=0;i<candidates.size();i++){
        list2[candidates[i]] += scores[i];
        if(list2[candidates[i]]>=max_score && winners_tie[candidates[i]]==1){
            cout<<candidates[i];
            return 0;
        }
   }
    return 0;
}