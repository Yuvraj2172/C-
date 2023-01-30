// Implement the class for Max Priority Queue which includes following functions -
// 1. getSize -
// Return the size of priority queue i.e. number of elements present in the priority queue.
// 2. isEmpty -
// Check if priority queue is empty or not. Return true or false accordingly.
// 3. insert -
// Given an element, insert that element in the priority queue at the correct position.
// 4. getMax -
// Return the maximum element present in the priority queue without deleting. Return -Infinity if priority queue is empty.
// 5. removeMax -
// Delete and return the maximum element present in the priority queue. Return -Infinity if priority queue is empty.

#include<bits/stdc++.h>
class PriorityQueue {
    vector<int> pq;

   public:
    PriorityQueue() {
    }

    void insert(int element) {
        pq.push_back(element);
        int childIndex = pq.size()-1;
        while(childIndex > 0){
            int parenIndex = (childIndex -1)/2;
            if(pq[childIndex ] > pq[parenIndex]){
                swap(pq[childIndex], pq[parenIndex]);
            }
            else break;
            childIndex = parenIndex;
        }
    }

    int getMax() {
        if(isEmpty())return 0;
        return pq[0];
    }

    int removeMax() {
       if(pq.empty())return 0;
       int max = pq[0];
       pq[0] = pq[pq.size()-1];
       pq.pop_back();
       int parenIndex = 0;
       while(parenIndex < pq.size()){
           int lci = 2 * parenIndex +1 ;
           int rci = 2* parenIndex +2 ;
           int maxIndex;
           if(lci < pq.size() && rci< pq.size()){
               maxIndex = (  pq[lci] >=pq[rci] ) ? lci : rci;
           }else if(  lci < pq.size() ){
               maxIndex= lci;
           }else break;
           if(pq[maxIndex] > pq[parenIndex])swap(pq[maxIndex] , pq[parenIndex] );
           else break;
           parenIndex = maxIndex;
       }
       return max;
    }

    int getSize() { 
        return pq.size();
    }

    bool isEmpty() {
        return pq.size()==0;
    }
};
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMax
                cout << pq.getMax() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMax() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }
        
        cin >> choice;
    }
}