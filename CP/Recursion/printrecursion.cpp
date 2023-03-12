#include<bits/stdc++.h>
using namespace std;
void spaces(int n){
    if(n!=0){
        cout<<" ";
        spaces(n-1);
    }
    return;
}
void printStars(int stars){
    if(stars!=0){
        cout<<"*";
        printStars(stars-1);
    }
    return;
}
void pyramid(int n, int i){
    if(i>n)return;
    int s = n-i;
    spaces(n-i);
    int stars = 2*i-1;
    printStars(stars);
    cout<<"\n";
    pyramid(n, i+1);
}
int main(){
    int n;
    cin>>n;
    pyramid(n,1);
}