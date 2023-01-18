#include <iostream>
using namespace std;
#include <string.h>
using namespace std;
void helper(string input, string output){
    if(input.size()==0){
        cout<<output<<"\n";
        return;
    }
    int first= input[0]-48;
    char firstchar='a' + first -1;
    helper(input.substr(1), output+firstchar);
    if(input.size()>=2){
        int ch2 = input[1]-48;
        int x = first*10 + ch2;
        if(x>=10 && x<=26){
            char ch3 = 'a' + x -1;
            helper(input.substr(2), output+ ch3);
        }
    }
    
}
void printAllPossibleCodes(string input) {
    string output="";
    helper(input,output);
    return;
}


int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
