// You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k largest numbers from given array. You need to save them in an array and return it.
// Time complexity should be O(nlogk) and space complexity should be not more than O(k).
#include <bits/stdc++.h>
vector<int> kLargest(int arr[], int n, int k){
    priority_queue<int , vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++) {
      pq.push(arr[i]);
    }
    for (int i = k; i < n; i++) {
      if (arr[i] >pq.top()) {
        pq.push(arr[i]);
        pq.pop();
      }
    }
    vector<int> ans;
    while (!pq.empty()) {
      ans.push_back(pq.top());
      pq.pop();
    }
    return ans;
  }

