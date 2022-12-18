#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
   for(int i=1;i<n;i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]> key){
        arr[j+1]= arr[j];
        j--;
    }
    arr[j+1]= key;
   }    
}
int main(){
    int arr[]={19,34,5,2,12,-1,0};
    int n=7;
    insertionsort(arr,n);
    for(auto it : arr)cout<<it<<' ';
}