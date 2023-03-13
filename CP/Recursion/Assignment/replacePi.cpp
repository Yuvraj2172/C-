int length(char input[]){
	int i=0;
	int len=0;
	while(input[i]!='\0'){
		i++;
		len++;
	}
	return len;
}
void helper(char input[], int start){
	if(input[start]=='\0' || input[start+1]=='\0')return;
	if(input[start] == 'p' && input[start+1]=='i' ){
		int len = length(input);
		input[len+2] = '\0';
		for(int i = len-1; i>=start + 2;i-- ){
			input[i+2] = input[i];
		}
		input[start] = '3';
		input[start+1]='.';
		input[start+2]='1';
		input[start+3] = '4';
	}
	helper(input, start + 1);
}
void replacePi(char input[]) {
	helper(input , 0);
}


