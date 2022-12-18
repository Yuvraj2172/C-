#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][4]={{1,2,3,4},{14,15,16,5},{13,20,17,6},{12,19,18,7},{11,10,9,8}};
    int n =5;
    int m=4;
    int c=0;
    int rowstart = 0;
    int rowend = n-1;
    int colstart = 0;
    int colend = m-1;
    while(c <n*m){
       for(int i =colstart ; i<=colend;i++){
        cout<<arr[rowstart][i]<<" ";
        c++;
       }cout<<endl;
       rowstart = rowstart +1;
       for(int i =  rowstart;i<=rowend;i++){
        cout<<arr[i][colend]<<" ";
        c++;
       }cout<<endl;
       colend = colend -1;
       for(int i=colend; i>=colstart ; i--){
        cout<<arr[rowend][i]<<" ";
        c++;
       }cout<<endl;
       rowend = rowend -1;
       for(int i=rowend ; i>=rowstart;i--){
        cout<<arr[i][colstart]<<" ";
        c++;
       }cout<<endl;
       colstart= colstart +1;
    }

}