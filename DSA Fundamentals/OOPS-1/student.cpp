#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    int roll;
    int age;
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

// int main(){
//     Student s1;  
//     cout<<s1.roll<<" "; 
//     Student s2;
//     cout<<s2.roll<<" ";
//     Student *s3 = new Student;
//     cout<<s3->roll<<" ";
// }