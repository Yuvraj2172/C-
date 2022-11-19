#include <bits/stdc++.h>
using namespace std;
int main()
{

    // You cannot change any value in symbol table.
    // Array cannot be reassigned ...
    //  Not Valid...    a=a+3

    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;

    a[0] = 5;
    a[1] = 10;
    cout << *a << endl;
    cout << *(a + 1) << endl;

    int *p = &a[0];
    cout << a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << &a << endl;

    cout << sizeof(p) << endl;
    cout << sizeof(a) << endl;

    p = p + 1; // Allowed
    // a=a+1; Not Allowed . Error
    // a++;  Not Allowed . Error

    p = a + 1;
    cout << *p<<endl;

    int ar[6] = {1, 2, 3};
    int *b = ar;
    cout <<"This "<< b[2]<<endl;
    cout<<sizeof(b)<<endl;


}