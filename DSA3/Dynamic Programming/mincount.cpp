// Given an integer N, find and return the count of minimum numbers required to represent N as a sum of squares.
// That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}. The output will be 1, as 1 is the minimum count of numbers required to represent N as sum of squares.
#include<bits/stdc++.h>
int minCount(int n , int* ans){
	if(sqrt(n) - floor(sqrt(n))==0)return 1;
	if(n==0 || n==1 || n==2 || n==3)return n;
	if(ans[n]!=-1)return ans[n];
	int val = n;
	for(int i=1 ; i*i <= n;i++){
		ans[n] = val = min(val, 1 + minCount(n - i*i, ans));
	}
	return ans[n];
}
int minCount(int n)
{
	int* ans = new int[n+1];
	for(int i=0;i<=n;i++)ans[i] = -1;
	return minCount(n, ans);
}