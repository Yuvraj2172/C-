#include<bits/stdc++.h>
using namespace std;
#include "StackLLtemplate.cpp"
int main(){
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    cout<<s.top()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.getSize()<<"\n";
    cout<<s.isEmpty()<<"\n";

}