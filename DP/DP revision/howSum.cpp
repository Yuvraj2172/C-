#include <bits/stdc++.h>
using namespace std;
void helper(vector<int> &arr, int target, int index, vector<int> &temp, vector<vector<int>> &ans, int n)
{
    if (ans.size() != 0)
        return;
    if (index == n)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        return;
    }
    if (arr[index] <= target)
    {
        temp.push_back(arr[index]);
        helper(arr, target - arr[index], index, temp, ans, n);
        temp.pop_back();
    }
    helper(arr, target, index + 1, temp, ans, n);
}
vector<vector<int>> howSum(int target, vector<int> arr)
{
    int index = 0;
    int n = arr.size();
    vector<int> temp;
    vector<vector<int>> ans;
    helper(arr, target, index, temp, ans, n);
    return ans;
}

int main()
{
    vector<vector<int>> ans ;
    int target = 8;
    vector<int> arr = {2, 4};
    ans=howSum(target, arr);
    for(int i=0; i< ans.size();i++){
        for(int j=0 ; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}