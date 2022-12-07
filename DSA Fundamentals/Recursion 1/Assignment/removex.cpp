// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>
using namespace std;
int length(char input[]){
    int len=0;
    for(int i=0;input[i]!='\0';i++){
        len++;
    }
    return len;
}
void removeX(char input[]) {
        int len = length(input);
        char str[100000];
        int k=0;
        for(int i=0;input[i]!='\0';i++){
            if(input[i]!='x'){
                str[k++]=input[i];
            }
        }
        for(int i=0;i<k;i++){
            input[i]=str[i];
        }
        input[k]='\0';
}
int main(){
    
}
