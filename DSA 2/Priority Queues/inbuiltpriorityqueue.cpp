#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(100) ;
    pq.push(200);
    pq.push(300);
    pq.push(69);
    cout<<pq.size()<<"\n";
    cout<<pq.top();
   while(!pq.empty()){
    cout<<pq.top()<<endl;
    pq.pop();
   }
}