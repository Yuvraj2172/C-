#include<bits/stdc++.h>
#define ll long long
using namespace std;
int helper(int n , int m){
    if(n==0 || m==0)return 0;
    if(n==1 && m==1 )return 1;
    return helper(n-1 ,m) + helper(n , m-1);
}
int helper2(int n , int m, vector<vector<ll>>&v){
    if(v[n][m]!= -1)return v[n][m];
    if(n==0 || m==0) return 0;
    if(n==1 && m==1)return 1;
    v[n][m] = helper2(n-1, m, v) + helper2(n , m-1,v);
    return v[n][m];
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<helper(n,m)<<"\n";
    vector<vector<long long> v(n+1, vector<long long>(m+1, -1));
     vector<vector<ll>> vec( n+1 , vector<ll> (m+1, -1)); 
    cout<<helper2(n,m,vec)<<"\n";
}
