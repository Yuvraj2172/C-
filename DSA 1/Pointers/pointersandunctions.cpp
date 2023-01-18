#include <bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void increamentPointer(int *p){
    // *p=*p+1; //Change in value
    p+=10; //No change 
}
void increament(int *p){
    (*p)+=10;
}
int main(){
    int i=10;
    int *p = &i;
    // print(p);
    cout<<*p<<endl;
    increament(p);
    cout<<*p<<endl;
}