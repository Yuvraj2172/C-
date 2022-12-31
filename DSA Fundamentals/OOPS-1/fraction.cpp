#include<bits/stdc++.h>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void Print(){
        cout<<this->numerator<<"/"<<this->denominator<<"\n";
        // cout<<numerator<<"/"<<denominator; // This is also fine 
    }
    void Simplify(){
        int gcd =1;
        int j = min(this->numerator, this->denominator);
        for(int i=1; i<j;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd = i;
            }
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }
    void add(Fraction f2){
        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        
        int num = x*numerator + (y*f2.numerator);
        numerator = num;
        denominator = lcm;
        Simplify();
    }
};
int main(){
    Fraction f1(10,2);
    // f1.Print();
    Fraction f2(15,4);
    f1.add(f2);
    f1.Print();
    f2.Print();

}