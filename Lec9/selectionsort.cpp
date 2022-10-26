#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index])min_index=j;
        }
        if(min_index!=i)
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    int arr[]={19,34,5,2,-1,0};
    int n=6;
    selectionsort(arr,n);
    for(auto it : arr)cout<<it<<' ';
}