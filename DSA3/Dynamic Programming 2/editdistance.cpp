#include<bits/stdc++.h>
int editDistance(string s, string t) {
	if(s.size()==0 || t.size()==0){
		return max(s.size(), t.size());
	}
	if(s[0] == t[0]){
		return editDistance(s.substr(1),t.substr(1));
        }
	int a = editDistance(s.substr(1), t)+1;
	int b = editDistance(s,t.substr(1))+1;
	int c = editDistance(s.substr(1),t.substr(1))+1;
	int ans = min(a, min(b,c));
	return ans;
}

#include<bits/stdc++.h>
int helper(string s, string t, int** ans){
	int m = s.size() ;
	int n = t.size();
	if(s.size()==0 || t.size()==0){
		return max(s.size(), t.size());
	}
	if(ans[m][n]!=-1){
		return ans[m][n];
	}
	int final_ans ;
	if(s[0] == t[0]){
		return helper(s.substr(1), t.substr(1) , ans);
	}
	else {
		int a = helper(s.substr(1) , t, ans)+1;
		int b = helper(s, t.substr(1), ans)+1;
		int c = helper(s.substr(1) , t.substr(1),ans)+1;
		final_ans = min(a, min(b,c));
	}
	ans[m][n] = final_ans;
	return final_ans;
}

int editDistance(string s, string t)
{
	int m = s.size();
	int n = t.size();
	int **ans = new int*[m+1];
	for(int i=0;i<=m;i++){
		ans[i] = new int[n+1];
		for(int j=0;j<=n;j++){
			ans[i][j] = -1;
		}
	}
	return helper(s, t, ans);
}