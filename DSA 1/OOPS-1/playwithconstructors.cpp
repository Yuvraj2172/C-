#include<bits/stdc++.h>
using namespace std;
#include "Student.cpp"
int main(){
    Student s1; //Constructor 1 will be called
    Student s2(101); // Constructor 2 will be callled
    Student s3(20,102); //Constructor 3 will be called
    Student s4(s3); //Copy constructor will be called
    s1 = s2; // Copy assignment operator... No constructor calling 
    Student s5 = s4;
    // Student s5;
    // s5=s4;
    // this would get simplified to Student s5(s4)... copy constructor will be called... 


}