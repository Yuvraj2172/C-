#include <bits/stdc++.h>
using namespace std;
int length(char input[]){
    int len=0;
    int i=0;
    while(input[i]!='\0'){
        i++;
        len++;
    }
    return len;
}
int main(){
    char input[7];
    cout<<"Enter input: ";
    // cin>>input; // cin does not reads space tab or newline . Therefore it ignores these.
    
    //We can use cin.getline(string_name , length_of_string, delimeter);
    cin.getline(input, 7,'u');
    cout<<input;
   cout<<length(input);
}