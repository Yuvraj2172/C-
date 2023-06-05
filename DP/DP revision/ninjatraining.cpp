#include<bits/stdc++.h>
int f(int day, int lasttask , vector<vector<int>> &points, vector<vector<int>>&dp){
    if(dp[day][lasttask]!=-1)return dp[day][lasttask];
    if(day==0){
        int maxi = 0;
        for(int task=0;task<3;task++){
            if(task!=lasttask){
                maxi = max(maxi, points[day][task]);
            }
        }
        dp[day][lasttask] = maxi;
        return dp[day][lasttask];
    }
    
    int maxi=0;
    for(int task=0;task<3;task++){
        if(task!=lasttask){
        int point = points[day][task] + f(day-1, task, points,dp);
        maxi = max(point, maxi);
        }
        
    }
    dp[day][lasttask] = maxi; 
    return maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{   
    vector<vector<int>> dp(n,vector<int>(4,-1));
    int task =3;
    return f(n-1, task, points,dp);
}