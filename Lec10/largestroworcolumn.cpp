#include <iostream>
using namespace std;

/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
void findLargest(int **arr, int m, int n) {
     int sum=0,maxSum = -2147483648,mr=0;
     for(int i=0;i<m;i++){
         sum=0;
         for(int j=0;j<n;j++){
             sum+=arr[i][j];
         }
         if(sum>maxSum){
             maxSum = sum;
            mr=i;
         }
     }

     int sum1=0, maxSum1 = -2147483648, mc=0;
     for(int i=0;i<n;i++){
         sum1=0;
         for(int j=0;j<m;j++){
             sum1+= arr[j][i];
         }
         if(sum1>maxSum1){
             maxSum1 = sum1;
             mc= i;
         }
     }
     if(maxSum>= maxSum1){
         cout<<"row "<<mr<<" "<<maxSum;
     }
     else {
         cout<<"column "<<mc<<" "<<maxSum1;
     }
 }

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}