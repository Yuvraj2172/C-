#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    int roll;
    private:
    int age;
    public:

    //Default Constructor...
    Student(){
        cout<<"Constructor Called\n";
    }
    //Parameterized Constructor
    Student(int roll){
         cout<<"Constructor 2 Called\n";
        this->roll = roll;
    }
    Student(int age, int roll){
        cout<<"Constructor 3 called\n";
       this -> age = age;
       this -> roll = roll;
        cout<<"this : "<<this<<"\n";
    }
    void display(){
        cout<<age<<" "<<roll<<"\n";
    }
    int getAge(){
        return age;
    }
    void setAge(int a,int password){
        if(password!=123)return;
        if(a < 0) return;
        age = a;   
    }
    void setRoll(int a){
        if(a < 0)return;
        roll = a;
    }
};

