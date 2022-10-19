#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
    cin>>n;
    vector<int> v;
    if(n==0){
        cout<<0;
    }
    while(n!=0){
        int s = n%2;
        v.push_back(s);
        n/=2;
    }
    reverse(v.begin(),v.end());
    for(auto it: v){
        cout<<it;
    }
   
}
