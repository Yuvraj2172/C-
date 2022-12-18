#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool p=prime(n);
    if(p==1){
        cout<<"Prime";
    }
    else cout<<"Not Prime";
}