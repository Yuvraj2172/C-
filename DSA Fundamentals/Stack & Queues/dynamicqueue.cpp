#include<bits/stdc++.h>
using namespace std;
template <typename T>
class dynamicQueueUsingArray{
    T *data;
    int nextIndex;
    int size;
    int firsIndex;
    int capacity;
    public:
    dynamicQueueUsingArray(int s){
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
            T* newdata = new  T[capacity*2];
            int j =0;
            for(int i=firsIndex ; i<capacity;i++){
                newdata[j] = data[i];
                j++;
            }
             for(int i=0;i<firsIndex;i++){
                newdata[j] = data[i];
                j++;
             }
             delete []data;
             data = newdata;
             firsIndex = 0;
             nextIndex = capacity;
             capacity *=2;
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