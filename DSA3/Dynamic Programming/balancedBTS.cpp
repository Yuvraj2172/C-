// Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
// This number can be huge, so, return output modulus 10^9 + 7.
// Time complexity should be O(h).
#include<bits/stdc++.h>
#define mod 1000000007
int helper(int n , int * ans){
    if(n==0 || n==1)return 1;
    if(ans[n]!=-1)return ans[n];
    int x= helper(n-1, ans);
    int y = helper(n-2, ans);
     int val1 = (int)(((long)x * x) % mod);
    int val2 = (int)((2 * (long)x * y) % mod);
    ans[n] = (val1 + val2) % mod;
    return ans[n];

}
int balancedBTs(int n) {
    int * ans = new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i] = -1;
    }
    return helper(n , ans);
}