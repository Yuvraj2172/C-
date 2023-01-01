#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
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
        cout<<strlen(this->name);
    }
    void display(){
        cout<<name <<" "<<age<<"\n";
    }
};