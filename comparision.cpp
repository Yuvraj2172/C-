#include <bits/stdc++.h>
using namespace  std;
int main(){
    int a,b;
    cout<<"Enter two Numbers ";
    cin>>a>>b;
    // if(a==b)cout<<"These are Equal"<<endl;
    // else cout<<"Not Equal"<<endl;

    if(a==b){
        cout<<"These are equal"<<endl;
    }
    else if(a<b){
        cout<<"A is smaller"<<endl;
    }
    else {
        cout<<"A is greater"<<endl;
    }
}