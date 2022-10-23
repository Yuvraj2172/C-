#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin>>n;
    //SC -> O(n)
    vector<int> dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+ dp[i-2];
    }
    cout<<dp[n]<<endl;

  //SC -> O(1)
    int prev=1;
    int prev2=0;
    for(int i=2;i<=n;i++){
            int curri=prev+ prev2;
            prev2=prev;
            prev=curri;
    }
    cout<<prev;
    return 0;  
}   