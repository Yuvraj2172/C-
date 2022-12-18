#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(2);
    for(auto it:ls)cout<<it<<" ";cout<<endl;
    ls.emplace_back(4);
    for(auto it:ls)cout<<it<<" ";cout<<endl;
    ls.push_front(5);
    for(auto it:ls)cout<<it<<" ";cout<<endl;
    ls.emplace_front(0);
    for(auto it:ls)cout<<it<<" ";cout<<endl;
}