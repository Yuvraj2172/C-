// A thief wants to loot houses. He knows the amount of money in each house. He cannot loot two consecutive houses. Find the maximum amount of money he can loot.
#include<bits/stdc++.h>
int maxMoneyLooted(int *arr, int n)
{
	int *output = new int[n];
	output[0] = arr[0];
	output[1] = max(arr[0] , arr[1]);
	for(int i=2;i<n;i++){
		output[i] = max(arr[i] + output[i-2], output[i-1]);
	}
	return output[n-1];
}