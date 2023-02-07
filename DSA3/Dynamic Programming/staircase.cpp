// A child is running up a staircase with n steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways.
#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int modAdd(int a, int b){
    return (int)(a%M + b%M) % M;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        long *arr = new long[n+1]{0};
        arr[0] = 1;
        arr[1] =1;
        arr[2]= 2;
        for(int i=3;i<n+1;i++){
         arr[i] = modAdd(arr[i-1], modAdd(arr[i-2], arr[i-3]) );
        }
        cout<<arr[n]<<"\n";
    }
    return 0;
}