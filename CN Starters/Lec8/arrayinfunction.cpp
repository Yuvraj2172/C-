#include <bits/stdc++.h>
using namespace std;
void fun(int arr[],int n){
//   cout<<sizeof(arr);
//while passing arrays in functions it is necessary to pass its size explicitly in the function
    for(auto i=0;i<n;i++)cout<<arr[i]<<" ";

}
int main(){
    int arr[100];
    for(int i=0;i<4;i++)cin>>arr[i];
    cout<<sizeof(arr)<<" "<<endl;
    fun(arr,sizeof(arr)/sizeof(arr[0])-96);
}