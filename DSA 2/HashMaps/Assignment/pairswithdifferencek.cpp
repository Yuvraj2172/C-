// You are given with an array of integers and an integer K. You have to find and print the count of all such pairs which have difference K.
// Note: Take absolute difference between the elements of the array.
#include<bits/stdc++.h>
int getPairsWithDifferenceK(int *arr, int n, int k) {
  unordered_map<int, int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	int count =0;
	if(k!=0){
		for(int i=0;i<n;i++){
			if(mp.count(arr[i]-k)>0){
				count += mp[arr[i]-k];
			}
		}
		return count;
	}
	for(int i=0;i<n;i++){
		if(mp.count(arr[i]) >0 ){
			count =count+  mp[arr[i]];
			mp[arr[i]]--;
		}
		count--;
	}
	return count;
}