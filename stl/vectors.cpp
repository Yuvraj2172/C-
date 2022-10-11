#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1); //pushes 1 into iteslf
    v.emplace_back(2); // adds 2 at the end of the vector . faster than push_back()
   vector<pair<int,int>> vec;
   vec.push_back({1,2}); 
   vec.emplace_back(1,2); // no need to add curly braces;
   
   vector<int> vfilled(5,100); // vfilled(size,element). element will filled upto given size
   for(auto it:vfilled)cout<<it<<" ";
    cout<<endl;
   vector<int> vgarbage(5);
   for(auto it: vgarbage)cout<<it<<" ";
   cout<<endl;

   vector<int> v1copy(vfilled);
   v1copy.push_back(900);
   for(auto it: v1copy)cout<<it<<" ";
    for(auto it: vfilled)cout<<it<<" ";
   cout<<endl;

}