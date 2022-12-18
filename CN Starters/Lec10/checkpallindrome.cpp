#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    bool flag = true;
    int len=0;
   
	for(int i=0;i<strlen(str)/2;i++){
        if(str[i]!=str[len-1-i]){
            flag = false;
            break;
        }
    }
    return flag;
        
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}