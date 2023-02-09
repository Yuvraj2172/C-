#include<bits/stdc++.h>
int knapsack(int *weights, int *values, int n, int maxWeight)
{
	if(n==0 || maxWeight==0){
        return 0;
    }
    if(weights[0] > maxWeight){
        return  knapsack(weights +1 , values+1 , n-1 , maxWeight  );
    }
    int x = knapsack(weights +1 ,values +1, n-1 , maxWeight - weights[0] )+ values[0];
    int y = knapsack(weights +1 , values+1 , n-1 , maxWeight  );
    return max(x,y);
}

#include<bits/stdc++.h>
int helper(int* weight , int * value , int i , int maxWeight, int** dp){
	if(i<0){
		return 0;
	}
	if(dp[i][maxWeight]!=-1){
		return dp[i][maxWeight];
	}
	if(weight[i]> maxWeight){
		dp[i][maxWeight] = helper(weight , value , i-1 ,maxWeight, dp);
		return dp[i][maxWeight];
	}
	else {
          dp[i][maxWeight] =
              max(value[i] +helper(weight, value, i - 1, maxWeight - weight[i], dp),helper(weight, value, i - 1, maxWeight,dp));
			return dp[i][maxWeight];
        }
}
int knapsack(int* weight, int* value, int n, int maxWeight) {
	int** dp = new int*[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int[maxWeight+1];
		for(int j=0;j<=maxWeight;j++){
			dp[i][j] = -1;
		}
	}
	return helper(weight, value , n-1 , maxWeight , dp);	
}