#include<bits/stdc++.h>
#include "student.cpp"
using namespace std;
int main(){
    char name[]="yuvraj";
    int age = 19;
    Student s1(age , name);
    s1.display();
    name[5]='k';
    int age2 = 19;
    Student s2(age2, name);
    s2.display();
    s1.display();
}