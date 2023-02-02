#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string, int> ourmap;
    ourmap["abc"] =1;
    ourmap["abc1"] =2;
    ourmap["abc3"] =3;
    ourmap["abc4"] =4;
    ourmap["abc5"] =5;
    ourmap["abc6"] =6;
    unordered_map<string, int> :: iterator it;
    it = ourmap.begin();
    //iterators holds address so we have to use -> operator...
    while(it!= ourmap.end()){
        cout<<it->first<<" "<<it->second<<"\n";
        it++;
    }

    //find will give us an iterator...
    unordered_map<string, int>::iterator it3 = ourmap.find("abc");
    //erase can work for a range also , erase(starting_iterator, ending_iterator) ...
    ourmap.erase(it3, it3 + 2);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    vector<int>::iterator it2;
    it2 = v.begin();
    while(it2!=v.end()){
        cout<<*it2<<"\n";
        it2++;
    }
}