#include <bits/stdc++.h>
using namespace std;
string stringUnique(string &str){
    int j=1;
    char lastChar = str[0];
    string res ="";
    int len = str.length();
    res +=lastChar;
    for(int i=1;i<len;i++){
        if(lastChar!= str[i]){
            lastChar=str[i];
            res+=lastChar;
            j++;
        }
    }
   return res;
   
}
int main(){
    string str = "aaabbbcccdsacdsadddssaa";
    string res = stringUnique(str);
   cout<<res;
}