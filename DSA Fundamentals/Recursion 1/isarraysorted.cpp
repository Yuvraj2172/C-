#include <iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1) return true;
    bool is_Sorted = isSorted(arr+1,size-1);
    if(!is_Sorted)return false;
    if(arr[0]>arr[1])return false;
    return true;
}

bool isSorted2(int arr[],int size){
    if(size==0 || size==1)return true;
    if(arr[0]>arr[1])return false;
    return isSorted2(arr+1,size-1);
}
int main(){
    int arr[]={1,2,3,4,6,7};
    cout<<isSorted2(arr,7);
}