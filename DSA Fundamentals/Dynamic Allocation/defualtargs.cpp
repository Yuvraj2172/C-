#include <iostream>
using namespace std;
//Dafault value is always given the right most paramater first... 
int sum(int a[],int size, int si=0){
    int ans=0;
    for(int i=si ; i<size;i++){
        ans+=a[i];
    }
    return ans;
}
int sum2(int a,int b, int c=-10, int d=0){
    return a+b+c+d;
}
int main(){
    int a[20]={1,2,3,4,5,6};
    cout<<sum(a,20,1)<<endl;

    cout<<sum(a,20)<<endl; // Will automatically assume starting index is 0...
    cout<<sum2(1,2);
}