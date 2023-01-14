#include<bits/stdc++.h>
using namespace std;
class StackUsingArray{
    private:
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray(int totalsize){
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }
    
    //return the number of elements present in the stack...
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        // if(nextIndex==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return nextIndex==0;
    }
    //insert element
    void push(int element){
        if(nextIndex==capacity){
            cout<<"Stack is full"<<"\n";
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    //delete element
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty\n";
            return INT_MIN;
        }  
        nextIndex--;
        return data[nextIndex];
    }

    // top
    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty\n";
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};