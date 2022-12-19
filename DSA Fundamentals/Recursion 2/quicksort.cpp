#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end)
{
    int count = 0;
    int pivot = arr[start];
    for (int i = start +1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = start + count;
    int temp = arr[start];
    arr[start] = arr[pivotIndex];
    arr[pivotIndex] = temp;
   
    int i = start;
    int j = end;
    while (i < pivotIndex && j < pivotIndex)
    {
        if (arr[i] <= pivot)
        {
            i++;
        }
        else if (arr[j] > pivot)
        {
            j--;
        }
        else
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}
void quickSortHelper(int arr[], int size)
{   
    if(size<=1)return;
    int start =0;
    int end = size -1;
    quickSort(arr, start, end);
}
int main()
{
    int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    int size = 10;
    quickSortHelper(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}