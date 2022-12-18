#include <bits/stdc++.h>
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
void reversestring(char input[]){
     int len = length(input);
for(int i=0;i<len/2;i++)swap(input[i],input[len-1-i]);
}
int main(){
    char input[100];
    cout<<"Enter Input : ";
    cin.getline(input,100);
    reversestring(input);
    cout<<input;
}