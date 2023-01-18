// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.

// Input format :

// Line 1 : Array size

// Line 2 : Array elements (separated by space)

// Line 3 : x (element to be searched)

#include <iostream>
using namespace std;
int binarySearchHelper(int input[], int start, int end , int element){
        if(start> end )return -1;
        int mid = start + (end - start)/2;
        if(input[mid]==element)return mid;
        if(input[mid]<element){
            return binarySearchHelper(input, mid+1 , end , element);
        }
        if(input[mid]> element){
            return binarySearchHelper(input, start , mid-1,element);
        }
}
int binarySearch(int input[], int size, int element) {
   return binarySearchHelper(input , 0, size -1,element);
}
int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
