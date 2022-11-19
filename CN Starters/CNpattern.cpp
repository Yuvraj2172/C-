#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        cout<<i;
        int j=i+1;
        while(j<=2*i-1){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}