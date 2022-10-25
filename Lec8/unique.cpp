#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag = true;
        for(int i=0;i<n;i++){
            flag =true;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(arr[i]==arr[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<arr[i]<<endl; 
                break;
            }
        }
    }
}