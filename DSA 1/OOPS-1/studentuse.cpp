#include<iostream>
using namespace std;
#include "Student.cpp"
int main(){
    //Creates objects statically
    Student s1;
    Student s2;
    s1.roll = 12;
    s1.age = 20;
    s2.age = 21;
    s2.roll = 45;
    cout<<s1.roll<<" "<<s1.age<<"\n";
    cout<<s2.roll<<" "<<s2.age<<"\n";
    //Creates objects dynamically.
    cout<<"Calling the class function...";
    s1.display();
    cout<<"S1 age="<<s1.getAge()<<"\n";
    Student *s4 = new Student();
    (*s4).age =15;
    (*s4).roll = 19;
    (*s4).display();
    s4->display();
    //This will also work...Just a way of dereferencing... 
    // s4->roll = 15;
    // s4->age = 19;
    cout<<"S4 age ===="<<s4->getAge()<<"\n";

    cout<<s4->roll<<" "<<s4->age<<"\n";
    // Student s5 = new Student; // Wrong Sytax
    Student s6;
    // new Student s7;  // Wrong Syntax

}