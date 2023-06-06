#include <bits/stdc++.h>
int f(int i, int j, vector<vector<int>> &matrix)
{
    if (j < 0 || j >= matrix[0].size())
        return -1e8;
    if (i == 0)
        return matrix[i][j];
    int u = matrix[i][j] + f(i - 1, j, matrix);
    int ld = matrix[i][j] + f(i - 1, j - 1, matrix);
    int rd = matrix[i][j] + f(i - 1, j + 1, matrix);
    return max(u, max(ld, rd));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int maxi = -1e8;
    for (int j = 0; j < m; j++)
    {
        maxi = max(maxi, f(n - 1, j, matrix));
    }
    return maxi;
}


#include <bits/stdc++.h> 
int f(int i, int  j , vector<vector<int>> &matrix, vector<vector<int>>&dp){
    if(j< 0 || j >=matrix[0].size())return -1e8;
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==0)return matrix[i][j];
    int u = matrix[i][j] + f(i-1, j ,matrix,dp);
    int ld = matrix[i][j] + f(i-1, j-1,matrix,dp);
    int rd = matrix[i][j] + f(i-1, j+1, matrix,dp);
    return dp[i][j]=max(u, max(ld, rd));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
   int maxi = -1e8;
   for(int j = 0 ; j <m; j++){
       maxi = max(maxi , f(n-1, j, matrix, dp));
   }
   return maxi;
}