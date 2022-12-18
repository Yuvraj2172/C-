#include <bits/stdc++.h>
using namespace std;
int main(){
    int number ;
    cin>>number;
    int n=number/2;
    int i=1;
    while(i<=n){
        int spaces=n-i+1;
        while(spaces>0){
            cout<<' ';
            spaces--;
        }
        int j=1;
        while(j<=2*i-1){
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    i=1;
    while(i<=number){
        cout<<'*';
        i++;
    }
    cout<<endl;
    i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=i){
            cout<<' ';
            spaces++;
        }
        int j=2*(n-i)+1;
        while(j>0){
            cout<<'*';
            j--;
        }
        cout<<endl;
        i++;
    }
}