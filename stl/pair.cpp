#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> p2={1,{2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    for(auto it: arr)cout<<it.first<<" "<<it.second<<endl;
}