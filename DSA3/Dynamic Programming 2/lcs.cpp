#include<bits/stdc++.h>
using namespace std;
int lcs(string s, string t){
    if(s.size()==0 || t.size()==0){
        return 0;
    }
    if(s[0] == t[0]){
        return 1 + lcs(s.substr(1) , t.substr(1));
    }
    else {
        int a = lcs(s.substr(1), t);
        int b = lcs(s, t.substr(1));
        int c = lcs(s.substr(1), t.substr(1));
        return max(a , max(b,c));
    }
}

    int helper(string s, string t, int** output){
        int m = s.size(), n = t.size();
        if(s.size()==0 || t.size()==0)return 0;
        if(output[m][n]!=-1){
         return output[m][n];
        }
        int ans;
        if(s[0] == t[0]){
        ans = 1 + helper(s.substr(1), t.substr(1) , output);    
        }
        else {
        int a = helper(s.substr(1), t,output);
        int b = helper(s, t.substr(1), output);
        int c = helper(s.substr(1) , t.substr(1) , output);
         ans = max( a , max(b,c));
        }
        output[m][n]  = ans;
        return ans;
        }
    int longestCommonSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int **output = new int*[m+1];
        for(int i=0;i<=m;i++){
            output[i] = new int[n+1];
        for(int j =0;j<=n;j++){
            output[i][j] = -1;
            }
        }
        return helper(s , t , output);
    }
    int longestCommonSubsequence(string s, string t) {
        int m =s.size();
        int n = t.size();
        int **output = new int*[m+1];
        for(int i=0;i<=m;i++){
        output[i] = new int[n+1];    
        }
        
        for(int j=0;j<=n;j++){
output[0][j] = 0;
        }
        for(int i =0;i<=m;i++){
output[i][0] = 0;
        }
        for(int i=1;i<=m;i++){
            for(int j = 1;j<=n;j++){
            if(s[m-i]==t[n-j]){
                output[i][j] = 1 + output[i-1][j-1];    
            }
                else {
                    int a = output[i-1][j];
                    int b = output[i][j-1];
                    int c = output[i-1][j-1];
                    output[i][j] = max(a, max(b,c));
                }
            }
        }
        return output[m][n];
    }
int main(){
    string s, t;
    cin>>s>>t;
    cout<<lcs(s,t)<<"\n";
}