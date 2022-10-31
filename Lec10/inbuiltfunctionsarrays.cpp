#include<bits/stdc++.h>
#include<cstring>
using namespace std;
void printAllPrefixes(char input[]){  //To print all prefixes of a string
    for(int i=0;input[i]!='\0';i++){
        char str[10000]="";
        strncpy(str,input,i+1);
        cout<<str<<endl;
    }
}
int main(){
    //Length of a string
    char input[100]="abcd";
    char input2[100]="hello";
    int len = strlen(input);
    cout<<"Length : "<<len<<endl;

   // to compare two strings
  //  strcmp(input1,input2) returns 0 if input1==input2
    if(strcmp(input,input2)==0){
        cout<<"Equal"<<endl;
        cout<<"Comparing Strings"<<strcmp(input,input2)<<endl;
    }
    else {
        cout<<"Not Equal"<<endl;
         cout<<"Comparing Strings"<<strcmp(input,input2)<<endl;
        }

    //To copy one string to another stcpy(destination_string , source_string)

    cout<<"Before Copying : "<<input<<" "<<strlen(input)<<endl;
    strcpy(input,input2);
    cout<<"After Copy : "<<input<<" "<<strlen(input)<<endl;

    // To copy first n characters from one string to another string strncpy(destination_string, source_string, number_of_characters)

    strncpy(input,input2,2);
    cout<<"Input After copying 2 characters: "<<input<<endl;
    char inp[1000]="Yuvraj Soni";
    printAllPrefixes(inp);


}