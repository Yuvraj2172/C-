#include <bits/stdc++.h>
using namespace std;
int binarySearch(int *arr, int n, int x)
{
    int start=0,end=n-1;
    bool flag=false;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x)return mid;
        else if(arr[mid]>x)end = mid-1;
        else start=mid+1;
    }
    return -1;
}