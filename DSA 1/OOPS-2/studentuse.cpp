#include<bits/stdc++.h>
#include "student.cpp"
using namespace std;
int main(){
    char name[]="yuvraj";
    int age = 19;
    Student s1(age , name);
    s1.display();
    Student s2(s1); //Inbuilt copy constructor uses shallow copy...To avoid shallow copy we have to create our own constructor...
    s2.name[0] = 'X';
    s1.display();
    s2.display();
    // name[5]='k';
    // int age2 = 19;
    // Student s2(age2, name);
    // s2.display();
    // s1.display();
}