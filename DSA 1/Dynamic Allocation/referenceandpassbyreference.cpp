#include<bits/stdc++.h>
using namespace std;
void increament(int &j){
    j++;
}

// Bad Practice - Because we are trying to access the memory that is going to be vanished once the function gets out of its scope
int& f(int n){
    int a =n;
    return a;
}
// Bad Practice - Because we are trying to access the memory that is going to be vanished once the function gets out of its scope
int* f2(){
    int i=10;
    return &i;
}
int main(){
    int *p = f2();
    int i=10;
    int &j=i;
    j++;
    int &l=f(i);
    cout<<"After returning from reference function : ";
    cout<<i<<endl; 

    int k=100;
    j=k;
    increament(i);
    cout<<i<<" "<<j<<endl;

}