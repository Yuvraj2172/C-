#include <bits/stdc++.h>
using namespace std;
int main(){
    int i =10;
    int *p=  &i;
    cout<<p<<endl;
    p+=1;
    cout<<p<<endl;
    cout<<p<<endl;
    p-=1;
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<"Character Pointer"<<endl;
    char ch='a';
    char *pc = &ch;
    cout<<pc<<endl;
    (pc)++;
    cout<<*pc<<endl;

    cout<<"Double Pointer"<<endl;
    double d =102.3;
    double *dp = &d;
    cout<<dp<<endl;
    dp++;
    cout<<dp<<endl;
}