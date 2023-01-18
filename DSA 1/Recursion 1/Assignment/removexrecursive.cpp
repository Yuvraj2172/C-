#include<bits/stdc++.h>
using namespace std;
int length(char input[]){
    int len=0;
    for(int i=0;input[i]!='\0';i++){
        len++;
    }
    return len;
}
void removeX(char input[], int start){
    if(input[start]=='\0'){
        return;
        }
    if(input[start]=='x'){
        int len= length(input);
        for(int i=start;i<len-1;i++){
            input[i]=input[i+1];
        }
        input[len-1]='\0';
        removeX(input,start);
    }
    removeX(input,start+1);
}
void removeX(char input[]){
    removeX(input,0);
}

int main() {
    char input[100]="xxxxxss";
    // input[2]='\0';
    // cout<<length(input);
    // cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
