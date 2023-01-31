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
     void insert(int element ){
        pq.push_back(element);
        int childIndex = pq.size()-1;
        int parentIndex = (childIndex -1) /2;
        while(childIndex>0 && pq[childIndex] < pq[parentIndex]){
            if(pq[childIndex] < pq[parentIndex])swap(pq[parentIndex], pq[childIndex]);
        childIndex = parentIndex ;
        }

        // parentIndex = (childIndex - 1)/2;
     } 
     int removeMin() {
        if(isEmpty())return 0;
        int removed = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        // if(isEmpty())return 0;
        int parentIndex =0;
        while(parentIndex < pq.size()){
            int lci =2*parentIndex + 1;
            int rci = 2* parentIndex +2;
            int replacedwith;
            if(lci < pq.size() && rci < pq.size()){
              replacedwith = (pq[lci] <= pq[rci]) ? lci : rci;
            }else if(lci < pq.size()){
                replacedwith = lci;
            }else{
                break;
            }
            if(pq[replacedwith] < pq[parentIndex]){
                swap(pq[parentIndex] , pq[replacedwith]);
            }
            else {
                break;
            }
            parentIndex = replacedwith;
        }
        return removed;
    }
};