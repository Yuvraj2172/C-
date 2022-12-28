// You have made a smartphone app and want to set its subscription price such that the profit earned is maximised. There are certain users who will subscribe to your app only if their budget is greater than or equal to your price.
// You will be provided with a list of size N having budgets of subscribers and you need to return the maximum profit that you can earn.
// Lets say you decide that price of your app is Rs. x and there are N number of subscribers. So maximum profit you can earn is :

//  m * x

// where m is total number of subscribers whose budget is greater than or equal to x.
#include <iostream>
using namespace std;
void merge(int input[], int start, int mid, int end) {
  int merged[end - start + 1];
  int idx1 = start;
  int idx2 = mid + 1;
  int x = 0;
  while (idx1 <= mid && idx2 <= end) {
    if (input[idx1] <= input[idx2]) {
      merged[x++] = input[idx1++];
    } else {
      merged[x++] = input[idx2++];
    }
  }
  while (idx1 <= mid) {
    merged[x++] = input[idx1++];
  }
  while (idx2 <= end) {
    merged[x++] = input[idx2++];
  }

  for (int i = 0, j = start; i < end - start + 1; i++, j++) {
    input[j] = merged[i];
  }
}

void mergeSorthelper(int input[], int start, int end) {
  if (start >=end)
    return;
  int mid = start + (end - start) / 2;
  mergeSorthelper(input, start, mid);
  mergeSorthelper(input, mid + 1, end);
  merge(input, start, mid, end);
}
void mergeSort(int input[], int size){
	mergeSorthelper(input ,0,size-1 );
        
}
int maximumProfit(int arr[], int n)
{
    mergeSort(arr , n);
    int maxprofit=-1;
    for(int i=0;i<n;i++){
        int currprofit =0;
        currprofit = arr[i]*(n-i);
        if(currprofit>=maxprofit)maxprofit = currprofit;
    }
    return maxprofit;
}

int main()
{
    int n, *input, i, *cost;
    cin >> n;
    input = new int[n];
    for (i = 0; i < n; i++)
        cin >> input[i];

    cout << maximumProfit(input, n) << endl;
}