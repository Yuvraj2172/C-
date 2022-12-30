#include<bits/stdc++.h>
using namespace std;
#include "student.cpp"
int main(){
    Student s1;
     Student *s2 = new Student;
     s1.setAge(20);
     s2->setAge(21);
     s1.setRoll(34);
     s2->setRoll(23);
     s1.display();
     s2->display();
}