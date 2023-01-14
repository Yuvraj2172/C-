#include<bits/stdc++.h>
using namespace std;
class StackUsingArray{
    private:
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray(){
        capacity = 4;
        data = new int[capacity];
        nextIndex = 0;
        
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
           int* newdata = new int[2*capacity];
           for(int i=0;i<capacity ;i++){
            newdata[i] = data[i];
           }
           capacity *= 2;
           delete [] data;
           data = newdata;
           
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