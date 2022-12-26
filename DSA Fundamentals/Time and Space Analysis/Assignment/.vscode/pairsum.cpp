#include <iostream>
#include <algorithm>
using namespace std;
int pairSum(int *arr, int n, int num)
{
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
		if(i<=j)continue;
      if (arr[i] + arr[j] == num) {
        count++;
      }
    }
  }
  return count;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}