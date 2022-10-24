#include<bits/stdc++.h>
using namespace std;
int main(){
    //take the array input from the user
    int n;
    cin>>n;
    int input[100]; //while createing arrays, always keep their size constant .
    
    //input array
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    //print array
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }

}