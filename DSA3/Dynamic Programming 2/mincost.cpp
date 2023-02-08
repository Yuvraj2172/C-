#include <bits/stdc++.h>

using namespace std;
#include<bits/stdc++.h>
int helper(int ** arr , int m , int n , int i , int j){
	if(i == m-1 && j == n-1 )return arr[i][j];
	if(i>m-1 || j> n-1)return INT_MAX;
	int horizontal = helper(arr, m , n , i+1, j );
	int vertical = helper(arr , m , n , i , j+1);
	int diagonal = helper(arr , m , n ,i+1, j+1);
	int ans=arr[i][j]+min(horizontal , min(vertical , diagonal));
	return ans;
}
int minCostPath(int **input, int m, int n)
{
    int i = 0, j = 0;
    return helper(input, m, n, i, j);
}
int minCostPath(int **input, int m, int n)
{
	int** output = new int*[m];
        for (int i = 0; i < m; i++) {
          output[i] = new int[n];
        }
	output[m-1][n-1] = input[m-1][n-1];
	for(int j = n-2;j>=0;j--){
		output[m-1][j] = output[m-1][j+1] + input[m-1][j];
	}
	for(int i=m-2;i>=0; i--){
		output[i][n-1] = output[i+1][n-1] + input[i][n-1];
	}
	for(int i=m-2 ;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			output[i][j] = min(output[i][j+1], min(output[i+1][j], output[i+1][j+1])) + input[i][j];
		}
	}
	return output[0][0];
}
int main()
{
    int **arr, n, m;
    cin >> n >> m;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << minCostPath(arr, n, m) << endl;
}