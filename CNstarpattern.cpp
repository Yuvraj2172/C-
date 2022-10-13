#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces =1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i){
            cout<<'*';
            j++;
        }
        int t=1;
        while(t<i){
            cout<<'*';
            t++;
        }
        cout<<endl;
        i++;
    }
}