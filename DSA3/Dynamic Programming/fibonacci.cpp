#include<bits/stdc++.h>
using namespace std;
int fibo_3(int n){
    int *ans = new int[n+1];
    ans[0] = 0;
    ans[1] = 1;
    for(int i =2;i<=n;i++){
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
}
int fibonacci_helper(int n, int *ans){
    if(n<=1){
        ans[n] = n;
        return ans[n];
    }
    // Check if ans already exists...
    if(ans[n]!=-1){
        return ans[n];
    }
    int a = fibonacci_helper(n-1, ans);
    int b = fibonacci_helper(n-2, ans);
    
    //save the output for future use...
    ans[n] = a+b;

    //return the final output...
    return ans[n];
    
}
int fibonacci(int n){
    int *ans = new int[n+1];
    for(int i=0;i<n+1;i++)ans[i]=-1;
    return fibonacci_helper(n,ans);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo_3(n);
}