#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1] = 100;

    //don't use [] for inserting elements... 
    // v[3] = 6;
    // v[40] = 67;
    v.push_back(90);
    v.push_back(12);
    cout<<v[0]<<"\n";
    cout<<v[1]<<"\n";
    cout<<v[2]<<"\n";
     cout<<v[3]<<"\n";
    cout<<v[4]<<"\n";
     cout<<v[5]<<"\n";
    // cout<<v[40]<<" "<<v.at(40);
    cout<<v.size()<<"\n";

}