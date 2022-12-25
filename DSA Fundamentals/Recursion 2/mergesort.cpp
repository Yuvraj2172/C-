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



int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}