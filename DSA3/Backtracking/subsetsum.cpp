#include<bits/stdc++.h>
using namespace std;
int subset(int arr[], int n, int i, int sum , int count){
    if(i==n){
        if(sum==0){
            count++;     
        }
        return count;
    }
    count = subset(arr, n, i+1, sum - arr[i], count);
    count = subset(arr, n , i+1, sum , count);
    return count;
}
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<subset(arr, n,0,k,0)<<"\n";
    }
    return 0;
}