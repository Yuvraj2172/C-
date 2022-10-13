#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch=char('A'+n-1);
    int i=1;
    while(i<=n){
        int j=i;
        while(j>0){
            cout<<char('A'+n-j);
            j--;
        }
        i++;
        cout<<endl;
    }    
}