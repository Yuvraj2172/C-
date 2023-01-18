#include<bits/stdc++.h>
using namespace std;
void printSub(string input, string output){
    if(input.length()==0){
        cout<<output<<"\n";
        return;
    }
    string smallString = input.substr(1);
    printSub(smallString, output);
    printSub(smallString, output+input[0]);
}
int main(){
     string s = "Yuvraj"; 
     printSub(s,"");
}