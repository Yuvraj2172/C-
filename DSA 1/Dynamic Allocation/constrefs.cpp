#include <iostream>
using namespace std;
void g(const int &a){
    //Will not change as the parameter is of const type even tho the parameter is of reference type...
    // a++ //Error
}
void f(const int *p){
    //Will not change as the parameter defined is of const type...
    // (*p)++; //Error
}
int main(){
    int const i=10;
    int const *p=&i; // p is a pointer to a constant integer...
    // cout<<*p<<endl;
    // // (*p)++;
    // cout<<*p<<endl;

    
    int j=12;
    int *p3=&j;
    f(p3);
    int const *p2=&j; //No Error , as pointer is declared of constant type thus will not change j...
    cout<<*p2<<endl;
    j++;
    cout<<*p2<<endl;
}