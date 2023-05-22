#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<long long> table(n+1, 0);
    table[0] = 0;
    table[1]=1;
    for(int i=2; i <= n ;i++){
        table[i] = table[i-2] + table[i-1];
    }
    cout<<table[n];
}