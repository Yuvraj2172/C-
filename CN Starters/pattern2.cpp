#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin>>n;
    int i=1,j=1;
    while(i<=n){
        int t=1;
        while (t<=i)
        {
            cout<<j<<" ";
            j+=1;
            t+=1;
        }
        cout<<endl;
        i+=1;     
    }
}