int length(char input[]){
    int i=0;
    int len=0;
    while(input[i]!='\0'){
        i++;
        len++;
    }
    return len;
}

void helper(char input[] , int start){
    if(input[start] =='\0' || input[start+1]=='\0')return;
    if(input[start] == input[start+1]){
        int len =  length(input);
        for(int i=start; input[i]!='\0';i++ ){
            input[i] = input[i+1];
        }
        input[len-1] ='\0';
        helper(input, start); 
    }
    helper(input, start+1);
    
}
void removeConsecutiveDuplicates(char *input) {
	helper(input , 0);
}