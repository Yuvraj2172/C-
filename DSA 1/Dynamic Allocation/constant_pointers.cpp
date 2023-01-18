#include<iostream>
using namespace std;
int main(){
    int i=10;
    int j=21;
    int const *p=&i;
    p=&j; // No error as p is pointing to a constant variable...

    //  To make constant pointer
     int * const p2 = &i;  //p2 is a const pointer to an integer...
     (*p2)++;
     p2=&j;

     int const * const p3 = &i;
    //  p3=&j;
    //  (*p3)++;

    // Both of the above steps are invalid...
}