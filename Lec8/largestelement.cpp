#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    if(n>0){
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest Element is : "<<max;
    }
    else {
        cout<<"Max : "<<INT_MIN;
    }

}