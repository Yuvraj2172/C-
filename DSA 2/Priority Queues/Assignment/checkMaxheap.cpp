// Given an array of integers, check whether it represents max-heap or not. Return true if the given array represents max-heap, else return false.
bool isMaxHeap(int arr[], int n) {
   for(int i=0; i<n;i++){
       int lci = 2*i + 1;
       int rci = 2*i +2;
       if(lci < n && rci < n){
           if(arr[lci] > arr[i] || arr[rci] > arr[i])return false;
       }else if(lci < n){
           if(arr[lci] > arr[i])return false;
       }
   }
    return true;
}