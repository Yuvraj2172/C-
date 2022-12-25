// You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3, and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
#include <iostream>
using namespace std;
int findDuplicate(int *arr, int n)
{
   long long sum=0;
   for(int i=0;i<n;i++)sum+=arr[i];
   long long  naturalSum = ((n-1)*(n-2))/2;
   return sum - naturalSum;
}

int findDuplicate(int *arr, int n)
{
   int x =0;
   for (int i = 0; i < n; i++) {
     x ^= arr[i];
   }
   for (int i = 0; i <= n - 2; i++) {
     x ^= i;
   }
   return x;
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}