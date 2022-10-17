#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=10;
    if(i==10){
        int j=12;   //will be available in its enclosing curly braces
        cout<<j;
    }
    else{
        int j=122;
        cout<<j<<endl;
    }
    // cout<<j; Not available

     i=1;
    while(i<10){
        int j=1;
        while (j<i)
        {
            int k=10;
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    
     i=10;
    if(i==10){
        int i=23;
        cout<<i<<endl;
    } 
    cout<<i;

} 