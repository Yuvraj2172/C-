// Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:

// a. The string begins with an 'a'
// b. Each 'a' is followed by nothing or an 'a' or "bb"
// c. Each "bb" is followed by nothing or an 'a'

// If all the rules are followed by the given string, return true otherwise return false.
#include <iostream>
using namespace std;
bool checkHelper(char input[], int i ){
    if(input[i]=='\0'){
        return true;
    }
   if(input[i]!='a')return false;
   if(input[i+1]!='\0' && input[i+2]!='\0'){
    if(input[i+1]=='b' && input[i+2]=='b'){
        return checkHelper(input, i+3);
    }
   }
   return checkHelper(input , i+1);
}
bool checkAB(char input[]){
    int i=0;
   return checkHelper(input ,i);   
}
int main() {
    char input[100]="";
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans )
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
