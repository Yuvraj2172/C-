#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
    for(auto i=0;i<n;i++)cout<<arr[i]<<" ";
}
void reverse(int a[],int n){
    for(int i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    reverse(a,6);
    printarray(a,6);

}