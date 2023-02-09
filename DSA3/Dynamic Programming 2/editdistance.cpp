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