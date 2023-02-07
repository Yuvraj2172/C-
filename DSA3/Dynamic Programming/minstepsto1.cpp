// Given a positive integer 'n', find and return the minimum number of steps that 'n' has to take to get reduced to 1. You can perform any one of the following 3 steps:

// 1.) Subtract 1 from it. (n = n - ­1) ,
// 2.) If its divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
// 3.) If its divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).  

#include<bits/stdc++.h>
int helper(int n, int count){
	if(n<=1){
		return count;
	}
	int x = helper(n-1, count+1);
	int y=INT_MAX;
	if(n%2==0)y=helper(n/2 , count+1);
	int z=INT_MAX;
	if(n%3==0) z = helper(n/3, count+1);
	int ans = min(x, min(y,z) );
	return ans;
}
int countMinStepsToOne(int n)
{   
    if(n==1)return 0;
	return helper(n ,0);
}


int helper(int n, int *ans){
	if(n<=1)return 0;
	if(ans[n]!=-1){
		return ans[n];
	}
	int x = helper(n-1,ans);
	int y = INT_MAX;
	if(n%2==0){
		y = helper(n/2 , ans);
	}
	int z = INT_MAX;
	if(n%3==0){
		z = helper(n/3, ans);
	}
	int output = min(x,min(y,z))+1;
	ans[n] = output;
	return output;
}
int countMinStepsToOne(int n)
{
	int *ans = new int[n+1];
	for(int i=0;i<n+1;i++){
		ans[i] = -1;
	}
	return helper(n , ans);
}