#include<bits/stdc++.h>
using namespace std;
#include "Student.cpp"
int main(){
    Student s1(10,20);
    Student s2(s1);
    s1.display();
    s2.display();
    Student *s3 = new Student(20,2001);
    s3->display();
    Student *s4 = new Student(*s3);
    s4->display();
    Student *s5= new Student(*s3);
    s5->display();
    Student *s6 = new Student(s2);
    s6->display();


    //Copy Assignment Operator
    Student soriginal(9,9001);
    Student scopy(8,8001);
    Student *scopy2=  new Student(30,300);
    scopy = soriginal;
    *scopy2 = scopy;
    scopy = *scopy2;
    soriginal.display();
    scopy2->display();
    scopy.display();
    delete scopy2;
}