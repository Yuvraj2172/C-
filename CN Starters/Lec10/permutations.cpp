#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1= "abcd";
    string str2 = "adab";
    int freq[256]={0};
    int k = 97;
    for(int i =0 ; i<str2.length();i++){
        int ch = str2[i];
        freq[ch]++;
    }
    for(int i=97;i<256;i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;
   for(int i =0 ; i<str1.length();i++){
        int ch = str1[i];
        freq[ch]--;
    }
 for(int i=97;i<256;i++){
        cout<<freq[i]<<" ";
    }   
}