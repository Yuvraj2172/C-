#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[]) {
    for(int i=0;i<strlen(input);i++){
        for(int j=i;j<strlen(input);j++){
           cout<<input.substr(i,j);
        }
    }
   
}
    


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}