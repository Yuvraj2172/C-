#include<bits/stdc++.h>
using namespace std;
string getString(int d){
    string options[] = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return options[d];
}
void keypadHelper(int num, string output){
    if(num==0){
        cout<<output<<"\n";
        return;
    }
    int lastDigit = num%10;
    string smallString  = getString(lastDigit);
    int smallNumber = num/10;
    for(int i=0;i<smallString.size();i++){
        keypadHelper(smallNumber , smallString[i]+output);
    }
}
void keypad(int num){
    keypadHelper(num,"");
}
int main(){
    int num = 23;
    keypad(num);
}