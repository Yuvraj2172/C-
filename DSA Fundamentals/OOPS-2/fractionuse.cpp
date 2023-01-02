#include<bits/stdc++.h>
using namespace std;
#include "fraction.cpp"
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction const f3(19,1990); //For a constant object we can only call constant functions...
    //Constant Functions : are those which doesn't change any property of current object...
    cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;
    // f3.setNumerator(10);
}