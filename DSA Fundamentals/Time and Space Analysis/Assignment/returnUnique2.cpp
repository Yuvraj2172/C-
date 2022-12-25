int findUnique(int *arr, int n) {
    int x=0;
    for(int i=0;i<n;i++){
      x^=arr[i];
    }
    return x;

}
