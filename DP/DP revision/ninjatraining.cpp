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

#include<bits/stdc++.h>
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4,0));
    dp[0][0] = max(points[0][1],points[0][2]);
    dp[0][1] = max(points[0][0],points[0][2]);
    dp[0][2] = max(points[0][0],points[0][1]);
    dp[0][3] = max(points[0][0],max(points[0][1], points[0][2]));
    for(int day=1; day < n;day++){
        for(int last = 0; last<4;last++){
            dp[day][last] = 0;
            int maxi = 0;
            for(int task=0; task<3;task++){
                if(task!= last){
                   int point = points[day][task] + dp[day-1][task];
                   maxi = max(maxi, point);
                }
            }
            dp[day][last] = maxi;
        }
    }
    return dp[n-1][3];
}


  

