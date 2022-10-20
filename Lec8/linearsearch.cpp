int linearSearch(int *arr, int n, int x)
{
    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}