#include<bits/stdc++.h>
using namespace std;
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
    cout<<fibonacci(n);
}