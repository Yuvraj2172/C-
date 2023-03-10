#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){

    // Vector
    // vector<int> v; 
    // for(int i=0;i<5;i++){
    //     v.push_back(i+1);
    // }    
    // vector<int> :: iterator it;
    // for(it=v.begin(); it!=v.end(); it++){
    //     cout<<*it<<" ";
    // }

    // String
    string s = "Yuvraj";
    string s1(s,2,4);
    cout<<s<<"\n";
    cout<<s1<<"\n";

    string s2 = s.substr(2,4);
    cout<<s2<<"\n";
    if(s1.compare(s2) == 0){
        cout<<s1<<" is equal to "<<s2<<"\n";
    }
    else {
        cout<<s1<<" is not equal to "<<s2<<"\n";
    }
    return 0;
}