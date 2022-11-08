#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;
    //Taking input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //Printing array row-wise
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
    //Printing array column-wise
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}