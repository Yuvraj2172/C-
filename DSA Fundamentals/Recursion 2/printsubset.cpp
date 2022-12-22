#include <iostream>
#include<bits/stdc++.h>

using namespace std;

// void printSubsetsOfArrayHelper(int input[], int size , int start, int output[]){
//     if(start == size){
//         int s = sizeof(output)/sizeof(output[0]);
//        for(int i =0 ; i<s;i++)cout<<output[i]<<" ";
//        cout<<endl;
//         return;
//     }
//     printSubsetsOfArrayHelper(input+1, size, start +1 , output);
//     int op[] ={input[start]};
//     int s = *(&output + 1) - output;
//     int i=1;
//     for(int j=0;j<s;j++){
//         op[i++]= output[j];
//     }
//     printSubsetsOfArrayHelper(input+1,size , start +1 ,op);
     
// }
void printSubsetsOfArray(int arr[], int n) {
   int total = 1<<n;
   for(int i=0;i<total;i++){
    for(int j=0;j<n;j++){
        if(i&(1<<j)){
            cout<<arr[j]<<" ";
        }
    }
    cout<<endl;  
     }
}

void printSubsetsOfArray(int arr[], int start, int n, int output[], int osize){
  if(start == n){
    for(int i=0;i<osize ;i++){
      cout<<output[i]<<" ";
    }
    cout<<endl;
    return;
  }
  int smallarr[1000];
  int smallSize = 0;
  printSubsetsOfArray(arr, start+1, n, output, osize);
  int i=0;
  for(;i<osize ;i++){
    smallarr[i]=output[i];
  }
  smallarr[i] = arr[start];
  printSubsetsOfArray(arr,  start+1, n,smallarr,  osize+1);
}
void printSubsetsOfArray(int arr[], int n) {
  int output[10000];
  int osize = 0;
  printSubsetsOfArray(arr, 0, n, output, osize);
}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
