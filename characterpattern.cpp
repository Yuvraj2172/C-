#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        cout<<ch;
        int j=1;
        while(j<i){
            cout<<(char)(ch+j);
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}