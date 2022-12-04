// Using global variables is a bad practice , can pass them as a reference or can return it . But should not go for the use of global variables.
#include<bits/stdc++.h>
using namespace std;
int a;
void g(){
    cout<<a<<endl;
    a++;
}
void f(){
    cout<<a<<endl;
    a++;
    g();
}
int main(){
    a=10;
    f();
    cout<<a;
}