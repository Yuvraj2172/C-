#include<bits/stdc++.h>
class PriorityQueue{
    vector<int> pq;
    public:
    PriorityQueue(){

    }
     bool isEmpty(){
        return pq.size()==0;
     }
     int getSize(){
        return pq.size(); // no. of elements present...
     }
     int getMin(){
        if(isEmpty()){
            return 0; //Priority queue is empty...
        }
        return pq[0];
     }
     
};