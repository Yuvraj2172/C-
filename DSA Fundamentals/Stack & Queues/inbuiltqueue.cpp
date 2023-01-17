#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(10);
    q.push(20);
    q.push(10);
    q.push(20);
    q.push(10);
    q.push(20);
    // cout<<q.front()<<"\n";
    // q.pop();
    // q.pop();
    // // q.pop();
    // cout<<q.front()<<"\n";
    // cout<<q.size()<<"\n";
    // cout<<q.empty()<<"\n";
    while(!q.empty()){
        cout<<q.front()<<" Size is : "<<q.size()<<"\n";
        q.pop();
    }
}