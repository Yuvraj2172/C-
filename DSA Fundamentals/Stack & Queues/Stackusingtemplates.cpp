#include<bits/stdc++.h>
using namespace std;
template <typename T>
class StackUsingArray{
    private:
    T *data;
    int nextIndex;
    int capacity;
        public:
    StackUsingArray(){
        capacity = 4;
        data = new T[capacity];
        nextIndex = 0;
        
    }
    
    //return the number of elements present in the stack...
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(T element){
        if(nextIndex==capacity){
           T* newdata = new T[2*capacity];
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
    T pop(){
        if(isEmpty()){
            cout<<"Stack is Empty\n";
            return 0;
        }  
        nextIndex--;
        return data[nextIndex];
    }

    // top
    T top(){
        if(isEmpty()){
            cout<<"Stack is Empty\n";
            return 0;
        }
        return data[nextIndex-1];
    }
};