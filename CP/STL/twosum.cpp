//  Two sum
// You are given an array of integers 'ARR' of length 'N' and an integer Target. Your task is to return all pairs of elements such that they add up to Target.
#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int , int>> ans;
	sort(arr.begin(), arr.end()); 
	int start =0 , end = n-1;
	while(start< end){
		if(arr[start] + arr[end] == target){
			ans.push_back({arr[start], arr[end]});
			start++;
			end--;
		}
		else if(arr[start] + arr[end] < target){
			start++;
		}
		else {
			end--;
		}
	}
	if(ans.empty()){
		ans.push_back({-1,-1});
	}
	return ans;
}
