#include<bits/stdc++.h>
using namespace std;
void findIndexes(int input[],int currIndex, int size, int x, int output[],int &k) {
    if(currIndex==size+1)
        return;
    if(input[currIndex]==x){
        output[k]=currIndex;
        k++;
    }
    findIndexes(input,currIndex+1,size,x,output,k);
}

int allIndexes(int input[], int size, int x, int output[]) {
    int k=0;
    findIndexes(input,0,size,x,output,k);
    return k;
}