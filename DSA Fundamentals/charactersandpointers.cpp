#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[]="abcde";
    // char*pstr="abcde"; wrong practice . Trying to access the read only memory...

    cout<<&str<<endl;
    // cout<<&pstr<<endl;
    int a[]={1,2,3};
    char b[] = "abc";
    cout<<a<<endl;
    cout<<b<<endl;
    
    char *c = &b[0];  
    cout<<c<<endl;   //will print the whole character array till it found the null character.

    char c1='g';
    char *pc = &c1;
    cout<<c1<<endl;
    cout<<pc<<endl;

}