#include <bits/stdc++.h>
using namespace std;
int main(){
    //Pointers are variables which stores the address of another variables.
    // int *p = &i; // p is a pointer to an integer.
    // char *ch = &c // ch is a pointer to a character.
   int i=10;
//    cout<<&i<<endl;
    int *p=&i;
//    float f = 10.2;
//    float *pf = &f;
//     double d = 1222.32;
//     double *pd = &d;
    // cout<<sizeof(*p);
    
//    int *p = &i;
//    *p=*p+6;
//    cout<<*p<<" "<<i;

// cout<< i++<<endl;
// cout<<i<<endl;
// cout<<*p;
    int a = *p;
    a++;
    // cout<<a<<endl;
    // cout<<*p<<endl;

    int *q =0;
    cout<<"EXEC";
    cout<<*q<<endl;
}