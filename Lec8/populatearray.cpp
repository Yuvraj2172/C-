#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n){
    for(auto i=0;i<n;i++)cout<<arr[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[10000];
    int val=1,odd=0,even=n-1;
    for(int i=0;i<n;i++){
        if(val%2!=0){
            arr[odd]=val;
            odd++;
            val++;
        }
        else{
            arr[even]=val;
            even--;
            val++;
        }
    }
    fun(arr,n);
}