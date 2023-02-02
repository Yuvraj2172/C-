#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        v.push_back(temp);
    }
    vector<int> ans;
   unordered_map<int,int> mp;
   for(int i=0;i<v.size();i++){
    if(mp.count(v[i])==0){
        mp[v[i]]=1;
        ans.push_back(v[i]);
    }
   }
   for(auto it : ans)cout<<it<<" ";
}