// 1) Print 2D Array
// Send Feedback
// Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.



#include <iostream>
using namespace std;
void print2DArray(int **arr, int n, int m) {
  for (int i = 0; i < n; i++) {
    int k = i;
    while (k <n ) {
      for (int j = 0; j < m; j++) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
      k++;
    }
  }
}



int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}
