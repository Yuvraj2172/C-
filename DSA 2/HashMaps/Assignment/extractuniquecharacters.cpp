// Given a string S, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same, as in the input string.

#include<bits/stdc++.h>
string uniqueChar(string str) {
	unordered_map<char , int> mp;
	string ans="";
	for(int i =0;i<str.length();i++){
		if(mp.count(str[i])==0){
			mp[str[i]]=1;
			ans+= str[i];
		}
	}
	return ans;
}
