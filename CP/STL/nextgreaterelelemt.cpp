#include<bits/stdc++.h>
vector<int> nextGreaterElement(vector<int> input) {
	stack<int> st;
	st.push(input[input.size()-1]);
	vector<int>ans(input.size(),-1);
	for(int i=input.size()-2;i>=0;i--){
		int temp = st.top();
		if(temp > input[i]){
			ans[i] = temp;
			st.push(input[i]);
		}
		else{
			bool flag  = false;
			while(!st.empty()){
				if( st.top()>input[i] ){
					ans[i] = st.top();
					st.push(input[i]);
					flag = true;
					break;
				}
				else{
					st.pop();
				}
			}
			if(flag == false){
				ans[i] = -1;
			}
			st.push(input[i]);
		}
	}
	return ans;
}
