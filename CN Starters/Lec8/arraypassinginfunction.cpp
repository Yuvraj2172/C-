#include <bits/stdc++.h>
using namespace std;
void increament(int a, int b[], int n){
    a++;
    cout<<"b[0] : "<<b[0]<<endl; //1
    cout<<"a : "<<a<<endl; //11
    b[0]++;
}
int main(){
    int a=10;
    int b[10]={1,2,3};
    increament(a,b,10);
    cout<<"a : " <<a<<endl; //10
    cout<<"b[0] : "<<b[0]<<endl; //2
}