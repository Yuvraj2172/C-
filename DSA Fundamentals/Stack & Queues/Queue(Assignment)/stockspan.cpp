#include<stack>
int* stockSpan(int *price, int size)  {
	int *arr = new int[size];
	stack<int> st;
	arr[0]=1;
	st.push(0);
	for(int i =1;i<size;i++){
		while(!st.empty() && price[i]> price[st.top()]){
			st.pop();
		}
		if(st.empty()){
			arr[i] = i+1;
            } 
		else {
            arr[i] = i - st.top();
                }
				st.push(i);
			}
			return arr;
}
