#include <bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int i=2;
    while(i<=n-1){
        if(n%i==0){
        cout<<n<<" is Not a Prime Number";
        break;
        }
        i+=1;
    }
    if(i==n)cout<<n<<" is a Prime Number";
 }