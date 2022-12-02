#include<bits/stdc++.h>
using namespace std;
void increament1(int **p){
    p=p+1;
}
void increament2(int**p){
    *p=*p+1;
}
void increament3(int **p){
    **p = **p +1;
}

    int main(){
    int i=10;
    int *p1 = &i;
    int* *p2=&p1;
//    cout<<p2<<endl;
//    cout<<&p1<<endl;
   
//    cout<<p1<<endl;
//    cout<<*p2<<endl;
//    cout<<&i<<endl;

//    cout<<i<<endl;
//    cout<<*p1<<endl;
//    cout<<**p2<<endl;

//    increament1(p2);
//    cout<<i<<endl;
//    increament2(p2);
//    cout<<i<<endl;
//    increament3(p2);
//    cout<<i<<endl;
}