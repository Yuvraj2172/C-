#include<bits/stdc++.h>
using namespace std;
int main(){
    int f;
    cout<<"Enter Temp in fehnrenheit : ";
    cin>>f;
    int temp = (f-32)*5/9;
    cout<<temp;

    int a,b;
    cin>>a>>b;
    bool isEqual=(a==b);
    bool isAGreater=(a>b);
    bool isALess=(a<b);
    cout<<"Are they equal "<<isEqual<<endl;
    cout<<"is A Greater "<<isAGreater<<endl;
    cout<<"is A Smaller "<<isALess<<endl;

    bool third = isEqual && isAGreater;
    bool fourth = isEqual || isAGreater;
    cout<<"Greater and equal with logical and operator"<<third<<endl;
    cout<<"Greater and equal with logical or operator"<<fourth<<endl;
    cout<<"Not Equal "<<!isEqual<<endl;
}