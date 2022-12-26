#include <iostream>
#include <algorithm>
using namespace std;
int pairSum(int *arr, int n, int num)
{
	sort(arr, arr+n);
	int startIndex =0;
	int endIndex  = n-1;
	int c=0;
	while(startIndex < endIndex){
		if(arr[startIndex]+ arr[endIndex]< num){
			startIndex++;
		}
		else if(arr[startIndex] + arr[endIndex]> num){
			endIndex--;
		}
		else {
			int elementAtStart = arr[startIndex];
			int elementAtEnd = arr[endIndex];
			if(elementAtEnd==elementAtStart){
				int totalElements = endIndex - startIndex + 1;
				c +=( (totalElements)*(totalElements-1)/2);
				return c;	
			}
			int tempStart = startIndex +1 ;
			int tempEnd = endIndex -1;
			while(tempStart <=tempEnd && arr[tempStart]==elementAtStart)tempStart+=1;
			while(tempEnd>=tempStart && arr[tempEnd] == elementAtEnd)tempEnd-=1;
			
			int totalElementsFromStart = tempStart - startIndex;
			int totalElementsFromEnd = endIndex - tempEnd;
			 
			 c+= (totalElementsFromEnd)*(totalElementsFromStart);
			 startIndex = tempStart;
			 endIndex = tempEnd;
		}
	}
	return c;
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