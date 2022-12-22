#include <iostream>
using namespace std;
#include <string.h>
int getCodes(string input, string output[10000]) {
   if(input[0]=='\0'){
    output[0]="";
    return 1;
   }
    int first = input[0]-48;
    char firstchar = 'a'+ first -1;
    char secondchar = '\0';
    string smalloutput1[500];
    string smalloutput2[500];
    int size1= getCodes(input.substr(1), smalloutput1);
    int size2=0;
    if(input[1]!='\0'){
        int second = first * 10 + input[1] -48;
        if(second >=10 && second <=26){
            secondchar = 'a' + second -1;
            size2=getCodes(input.substr(2),smalloutput2);
        }
    }
    int k=0;
    for(int i=0;i<size1;i++){
        output[k]=firstchar+smalloutput1[i];
        k++;
    }
    for(int i=0;i<size2;i++){
        output[k]=secondchar + smalloutput2[i];
        k++;
    }
    return k;
}


int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
