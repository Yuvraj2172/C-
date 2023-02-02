// You are given an array of unique integers that contain numbers in random order. You have to find the longest possible sequence of consecutive numbers using the numbers from given array.
#include <unordered_map>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
  // Your Code goes here
  unordered_map<int, int> m;
  vector<int> ans;
  for (int i = 0; i < n; i++)
    m[arr[i]] = i;
  for (int i = 0; i < n; i++) {
    vector<int> temp;
    // Find the starting point for the increasing sequence
    if (m.count(arr[i] - 1) == 0) {
      temp.push_back(arr[i]);
      int t = 1;
      while (m.count(arr[i] + t)) {
        temp.push_back(arr[i] + t);
        t++;
      }
      if (temp.size() > ans.size())
        ans = temp;
    }
  }
  int n1 = ans[0];
  int n2 = ans[ans.size() - 1];
  ans.clear();
  ans.push_back(n1);
  ans.push_back(n2);
  return ans;
}