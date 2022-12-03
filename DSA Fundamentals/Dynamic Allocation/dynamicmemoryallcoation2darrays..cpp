#include<iostream>
using namespace std;
int main(){
    int m=3,n=3;
    int** p= new int*[m];
    for(int i=0;i<m;i++){
        p[i]= new int[n];
    }
    for(int i=0; i <m;i++){
        for(int j=0;j<n;j++){
            cin>>p[i][j];
        }
    }
    for(int i=0; i <m;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<m;i++){
        delete [] p[i];
    }
}