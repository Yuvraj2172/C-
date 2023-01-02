#include<bits/stdc++.h>
using namespace std;
#include "fraction3.cpp"
int main(){
    Fraction f1(15,4);
    Fraction f2(15,4);
    Fraction f3 = f1.add(f2);
    f1.print();
    f2.print();
    f3.print();
    Fraction f4 = f1 + f2;
    f4.print();
    Fraction f5 = f1* f2;
    f5.print();
   if(f1==f2)cout<<"Equal\n";
   else cout<<"Not Equal\n";
    // cout<<f1==f2;
}