// Given an array A of random integers and an integer k, find and return the kth largest element in the array.
// Note: Try to do this question in less than O(N * logN) time.
#include<bits/stdc++.h>
int kthLargest(int* arr, int n, int k) {
   priority_queue<int , vector<int> , greater<int>> pq;
   for(int i=0;i<k;i++){
       pq.push(arr[i]);
   }
   for(int i=k ; i< n;i++){
       if(arr[i] > pq.top()){
           pq.push(arr[i]);
           pq.pop();
       }
   }
   return pq.top();
}