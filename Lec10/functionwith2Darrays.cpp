#include<bits/stdc++.h>
using namespace std;
void printArray(int a[10][10] ,int m , int n){
    // we will pass the total number of columns .It is neccessary for the calculation of cells.
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[10][10]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;
   
    printArray(a,10,10);

}