#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string , int > ourmap;

    //insert
    pair<string, int> p("abc" ,1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    //find or access
    cout<<ourmap["abc"]<<"\n";
    cout<<ourmap.at("abc")<<"\n";

    // cout<<ourmap.at("ghi")<<"\n";
    cout<<"size "<<ourmap.size()<<"\n";
    ourmap["jkl"] = 3;

    //check presence
    if(ourmap.count("ghi")> 0){
        cout<<"ghi is present "<<"\n";
    }
    ourmap.erase("ghi");
    if(ourmap.count("ghi")> 0){
        cout<<"ghi is present "<<"\n";
    }else cout<<"Not present\n";
     cout<<"size "<<ourmap.size()<<"\n";
}