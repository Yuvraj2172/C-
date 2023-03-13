int length(char input[]){
    int i=0;
    int len=0;
    while(input[i]!='\0'){
        i++;
        len++;
    }
    return len;
}
bool helper(char input[], int i , int j){
    if(i<j){
      if (input[i] != input[j]) {
        return false;
      }
      return helper(input, i + 1, j - 1);
    }
    return true;
}
bool checkPalindrome(char input[]) {
    int len =  length(input) -1;
    return helper(input, 0 , len);
}


