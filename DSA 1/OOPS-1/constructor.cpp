#include<bits/stdc++.h>
using namespace std;
#include "Student.cpp"
int main(){
    Student s1;
    s1.display();
    Student s2;
    s2.display();
    Student *s3 = new Student();
    s3->display();
    cout<<"Parameterized constructor DEMO!\n";
    Student *s4 = new Student(23);
    s4->display();
    Student s5(25);
    s5.display();
    Student *s6= new Student(34,56);
    s6->display();

    Student s7(10,101);
    cout<<"Address of s1"<<&s7<<"\n";
}