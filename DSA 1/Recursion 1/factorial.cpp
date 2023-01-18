#include<iostream>
using namespace std;
int factorial(int n){
    if(n<2)return n;
    return n * factorial(n-1);
}
int main(){
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output;
}