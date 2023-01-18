#include "dynamicqueue.cpp"
#include<bits/stdc++.h>
using namespace std;
int main(){
    QueueUsingArray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.getSize()<<"\n";
    cout<<q.isEmpty()<<"\n";
    cout<<q.front()<<"\n";
     cout<<q.getSize()<<"\n";
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
     cout<<q.dequeue()<<"\n";
    cout<<q.getSize()<<"\n";
}