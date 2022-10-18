#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    int dec=0;
    int i=0;
    while(n!=0){
        int s=n%10;
        dec= dec + s* pow(2,i);
        i++;
        n/=10;
    }
    cout<<deci;
}
