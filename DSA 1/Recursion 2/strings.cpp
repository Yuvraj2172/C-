#include<bits/stdc++.h>
using namespace std;
int main(){
     // string s="abc";
     // cout<<s<<"\n";
     // string s1 = "def";
     // cout<<s1<<'\n';
     // string* sp = new string("ghi");
     // cout<<*sp<<'\n';

     // string sin ;
     // // cin>>sin; 
     // getline(cin, sin);
     // cout<<sin<<"\n";

     // string *sp2 = new string();
     // getline(cin, *sp2);
     // cout<<*sp2<<"\n";

     string s = "defdef";
     cout<<s[0]<<'\n';
     s[0]='a';
     string s1 = "def";

     string s2= s+ s1;
     // OR 
     s+=s1;
     cout<<s<<"\n";
     cout<<s2<<"\n";
     cout<<s2.size()<<'\n';
     cout<<s2.length()<<"\n";
     cout<<s2.substr(3)<<"\n"; // gives a string from index 3;
     cout<<s2.substr(3,4)<<"\n"; // gives a string from index firstArguement=3 of length secondArguement=4;

     cout<<s2.find("def")<<"\n"; // finds the first index of the arguement provided
    
}