#include <bits/stdc++.h>
using namespace std;
int sum(int *a, int size){
    // cout<<sizeof(a)<<endl;
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=i;
          cout<<i;
        }
    return ans;
}
int main(){
    int a[10];
    // cout<<sizeof(a)<<endl;
    cout<<sum(a,10);
    int base =2;
    cout<<sum(a+base,10-base); //we can pass part of an array as a parameter as well.
    return 0;
}