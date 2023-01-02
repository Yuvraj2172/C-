#include<bits/stdc++.h>
using namespace std;
class Student{
   public:
    int age;
    char *name;
    public:
    Student(int age, char *name){
        this->age = age;
        //Shallow Copying ... Should be avoided
        // this->name  = name;

        //Deep Copy
        this->name  = new char[strlen(name)+1]; // +1 for the null(\0) character...
        strcpy(this->name , name);
    }
    Student(Student const &s){
        this->age= s.age;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name, s.name);
    }
    void display(){
        cout<<name <<" "<<age<<"\n";
    }
};