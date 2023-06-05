#include <bits/stdc++.h>
int maximumNonAdjacentSum(vector<int> &nums)
{
    vector<int> dp(nums.size());
    dp[0] = nums[0];
    int neg = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int take = nums[i] + (i - 2 < 0 ? 0 : dp[i - 2]);
        int nontake = dp[i - 1];
        dp[i] = max(take, nontake);
    }
    return dp[n - 1];
}