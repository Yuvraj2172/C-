#include<bits/stdc++.h>
using namespace std;
#include "Stackusingtemplates.cpp"
int main(){
    StackUsingArray<char> s;
    s.push(100);
    s.push(102);
    s.push(103);
    cout<<s.top()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.size();
}