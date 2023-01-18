#include <bits/stdc++.h>
using namespace std;
int length(char input[]){
  int len=0;
  for(int i=0;input[i]!='\0';i++)len++;
  return len;
}
void pairStartHelper(char input[], int start){
    if(input[start]=='\0')return;
    if(input[start]==input[start+1]){
        int len= length(input);
        for(int i=len; i>=start+1;i--){
            input[i+1]=input[i];
        }
        input[start+1]='*';
        input[len+1]='\0';
    }
    pairStartHelper(input,start+1);
}
void pairStar(char input[]) {
    pairStartHelper(input,0);

}

int main(){
    char input[10000]="aaaaa";
    pairStar(input);
    cout<<input;
    
}