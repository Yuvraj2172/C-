#include <bits/stdc++.h>
using namespace std;
class AskForPromotion{
    virtual void Promotion()=0;
};
class Employee:AskForPromotion
{
    private:
      string name;
    string company;
    int age;
public:
    void setName(string name){
        this->name = name;
    }
    string getName()const{
        return this->name;
    }
    void setCompany(string company){
        this->company = company;
    }
    string getCompany()const{return this->company;};
    void setAge(int age){this->age = age;};
    int getAge()const{return this->age;};
    Employee(){ 
        cout<<"Enter Name :";
        string temp;
        getline(cin, temp);
        this->name = temp;
        cout<<"Enter Company : ";
        getline(cin, temp);
        this->company = temp;
        cout<<"Enter Age : " ;
        getline(cin, temp);
        this->age = stoi(temp);
    }
    Employee(string name, string company, int age){
        this->name = name;
        this->company = company;
        this->age = age;
    }
    void introduce()
    {
        cout << "My name is " << name << endl;
        cout << "My company is " << company << endl;
        cout << "My age is " << age << endl;
    }
    void Promotion(){
        if(age>20)cout<<"Congrats :" <<name <<" you are promoted!"<<endl;
        else cout<<"No Promotions! for "<<name<<endl;
    }
};
class Developer : public Employee{
    public: 
    string favLanguage;
    Developer(string name , string company , int age, string favLanguage) :Employee(name, company, age){
       
        this->favLanguage = favLanguage;
    }
    void showDev(){
        introduce();
        cout<<this->favLanguage<<endl;
    }
};
int main()
{
    Employee employee=  Employee("Yuvraj", "Google", 21);
//    cout<< employee.getName();
//    employee.setName("Soni");
//    cout<< employee.getName();
//    employee.Promotion();
   Developer dev1 = Developer("Uveee", "Google",19, "CPP");
   dev1.showDev();

    // employee.name = "Yuvraj";
    // employee.company = "Google"; 
    // employee.age = 19;
    // employee.introduce();
    // employee.n
    // Employee emp1 ;
    // emp1.introduce();

    Employee *e1 = &dev1;
    

}