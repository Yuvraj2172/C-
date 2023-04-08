#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int roll_num;
    char section;
};
void printStudent(student s1){
    
    cout<<s1.roll_num<<" "<<s1.name<<" "<<s1.section<<"\n";
}
int main(){
    student s1;
    s1.name = "Yuvraj Soni";
    s1.roll_num = 77;
    s1.section='D';
    printStudent(s1);

    return 0;
}
