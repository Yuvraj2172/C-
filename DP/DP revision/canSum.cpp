#include <bits/stdc++.h>
using namespace std;
bool canSum(int target, vector<int> &arr)
{
    if (target == 0)
        return 1;
    if (target < 0)
        return 0;
    bool ans = 0;
    for (auto it : arr)
    {
        int remaining = target - it;
        bool tempAns = canSum(remaining, arr);
        ans = ans or tempAns;
    }
    return ans;
}
bool canSum2(int target, vector<int> &arr)
{
    if (target == 0)
        return 1;
    if (target < 0)
        return 0;
    for (auto it : arr)
    {
        int remaining = target - it;

        if (canSum2(remaining, arr) == true)
            return true;
    }
    return false;
}
bool canSumMemo(int target, vector<int> &arr, map<int , int> &mp)
{
    if(mp.find(target) != mp.end())return mp[target];
    if (target == 0)
        return 1;
    if (target < 0)
        return 0;
    for (auto it : arr)
    {
        int remaining = target - it;
        if (canSumMemo(remaining, arr, mp) == true)
        {
            mp[remaining] =1;
            return mp[remaining];
        }
    }
    mp[target] = 0;
    return 0;
}
int main()
{
   map<int, int> mp;
   vector<int> arr = {2,3};
   cout<<canSumMemo(7,arr, mp)<<endl;
   mp.clear();
   vector<int> arr2 ={5,3,4,7};
   cout<<canSumMemo(7,arr2, mp)<<endl;
   mp.clear();
   vector<int> arr3 = {2,4};
   cout<<canSumMemo(7,arr3, mp)<<endl;
   mp.clear();
   vector<int> arr4 = {2,3,5};
   cout<<canSumMemo(8,arr4, mp)<<endl;
   mp.clear();
   vector<int> arr5 ={7,14};
   cout<<canSumMemo(300,arr5, mp)<<endl;
   mp.clear();
 }