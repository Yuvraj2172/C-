#include<bits/stdc++.h>
using namespace std;
#define emplace_back em;
#define ll long long;
int length(char arr[]){
    int len =0;
    int i=0;
    while(arr[i]!='\0'){
        len++;
        i++;
    }
    return len;
}
int main(){
char large[1000];
char small[1000];
cin>>large>>small;
int largelen = length(large);
int smalllen = length(small);
int start =0;
for(int i=0 ; i<largelen;i++){
    if(large[i]==small[start]){
        cout<<"FOUND "<<small[start]<<"\n"; 
        start++;
    }
}
// for(int i=0;i<10;i++)cout<<i<<" ";
return 0;
}