#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter Number";
    // cin>>n;
    // int val=1,i=1;
    // while(i<=n){
    //     int k=1;
    //     while(k<=n-i){
    //         cout<<" ";
    //         k++;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<val;
    //         val++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

	int basic;
    char grade;
    cin>>basic>>grade;
    double salary =0 ;
    if(grade=='A'){
        salary=salary + 1700;
    }
    else if(grade=='B')
        salary = salary+ 1500;
    else salary = salary + 1300;
    int ts=round((basic+(0.20*basic)+(0.50*basic)+salary)-(0.11*basic));
    cout<<ts;

}