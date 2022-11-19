#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,0,0,1,1,1,1,2,2,3,3,3,4};
    int len =0;
    int i=1;
    int j=1;
    while(i<13){
        if(arr[i]!=arr[j]){
            len++;
            arr[j]=arr[i];
            i++;
            j++;
        }
        i++;
    }
    for(int i=0;i<13;i++)cout<<arr[i]<<" ";
    cout<<endl<<len;
}