#include <bits/stdc++.h>
using namespace std;
#include "fraction3.cpp"
int main()
{
    Fraction f1(10, 3);
    Fraction f2(5, 2);

    // f1++ operator (post increament operator) overloading...
    Fraction f3 = f1++;
    f1.print();
    f3.print();

    // += operator overloading...
    f1+=f3;
    f1.print();
    (f1 += f2) += f2;
    f1.print();
    f2.print();
}