#include<bits/stdc++.h>
int length(char input[]){
    int len =0;
    int i=0;
    while(input[i]!='\0'){
        i++;
        len++;
    }
    return len;
}
void helper(char input[], int n, int& ans, int i){
    if(n<0)return;
    ans = ans + ((input[n]-'0') * (int)pow(10, i));
    helper(input , n-1 , ans , i+1);
}
int stringToNumber(char input[]) {
    int len = length(input);
    int ans=0;
    helper(input, len-1,ans,0);
    return ans;
}
