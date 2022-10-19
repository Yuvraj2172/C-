#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=1;
    while(n>0){
        ans*=n;
        n--;
    }
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_n_r=fact(n-r);
    int ans = fact_n/(fact_r*fact_n_r);
    cout<<ans;

}