#include<bits/stdc++.h>
using namespace std;
void ascendingbubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}
void descendingbubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}
int main(){
int arr[]={10,1,7,9,14,5};
int n=6;
cout<<"Ascending Order: ";
ascendingbubblesort(arr,n);
for(auto it : arr)cout<<it<<" ";
cout<<endl;
cout<<"Descending Order: ";
descendingbubblesort(arr,n);
for(auto it : arr)cout<<it<<" ";
}