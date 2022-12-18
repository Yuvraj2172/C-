#include<bits/stdc++.h>
using namespace std;
int length(char input[]){
    int len=0;
    int i=0;
    while(input[i]!='\0'){
        i++;
        len++;
    }
    return len;
}
int main(){
    char a[]="yuvraj soni";
    cout<<length(a);
}