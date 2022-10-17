#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
    cout<<2<<endl;
    for(int i=3;i<=n;i++){
        bool flag= false;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag = true;
                break;
            }
        }
        if(!flag)cout<<i<<endl;
    }
}


