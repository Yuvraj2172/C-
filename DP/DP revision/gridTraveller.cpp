#include<bits/stdc++.h>
using namespace std;
int helper(int n , int m){
    if(n==0 || m==0)return 0;
    if(n==1 && m==1 )return 1;
    return helper(n-1 ,m) + helper(n , m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<helper(n,m);
}