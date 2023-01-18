int findUnique(int *arr, int n) {
    int unique=-1;
    for(int i=0; i<n;i++){
        int currElement = arr[i];
        int currIndex= i;
        if(arr[i]!=-1){
          for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
              arr[j] = -1;
              arr[currIndex] = -1;
              break;
            }
          }
        }
        }
        
    for(int i=0;i<n;i++){
        if(arr[i]!=-1)return arr[i];
    }  
}