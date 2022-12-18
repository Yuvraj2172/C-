#include<bits/stdc++.h>
int length(char arr[], int i){
    if(arr[i]=='\0')return 0;
    return 1 + length(arr, i+1);
}
using namespace std;
int main(){
    char str[]="Yuvraj Soni";
    int l = length(str,0 );
    cout<<l<<"\n";
}