#include<bits/stdc++.h>
using namespace std;
int main(){
    // char c;
    // cin>>c;
    // int count=0;
    // while(c!='$'){
    //     count++;
    //     cin>>c;
    // }
    // cout<<count;
    // // cin just ignores all the spaces , tabs , enter characters('\n')
    char c;
    c=cin.get();
    int count=0;
    while(c!='$'){
        count++;
        c=cin.get();
    }
    cout<<count;
}