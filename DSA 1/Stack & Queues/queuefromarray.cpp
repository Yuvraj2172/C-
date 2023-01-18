#include<bits/stdc++.h>
using namespace std;
template <typename T>
class QueueUsingArray{
    T *data;
    int nextIndex;
    int size;
    int firsIndex;
    int capacity;
    public:
    QueueUsingArray(int s){
        data = new T(s);
        nextIndex=0;
        size =0;
        firsIndex= -1;
        capacity=s;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue(T element){
        if(size==capacity){
            cout<<"Queue is FULL\n";
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex+1) %capacity;
        if(firsIndex==-1){
            firsIndex=0;
        }
        size++;
    }
    T front(){
        if(isEmpty()){
            cout<<"Queue is EMPTY!\n";
            return 0;
        }
        return data[firsIndex];
    }
    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is EMPTY!\n";
            return 0;
        }
        T ans = data[firsIndex];
        firsIndex = (firsIndex+1)%5;
        size--;
        if(size==0){
            firsIndex = -1;
            nextIndex = 0;
        }
        return ans; 
    }
};