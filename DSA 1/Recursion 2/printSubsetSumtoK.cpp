#include <iostream>
using namespace std;

void helper(int input[], int size , int start, int k,int output[],int osize){
    if(start==size){
        if(k==0){
            for(int i=0;i<osize;i++){
                cout<<output[i]<<" ";
            }
            cout<<endl;
            return;
        }
        else return;
    }
    helper(input, size , start +1, k,output, osize);
     int smallarr[1000];
    int smallsize=0;
    int i=0;
    for(; i<osize;i++){
        smallarr[i]=output[i];
    }
    smallarr[i]=input[start];
    helper(input, size , start+1 , k-input[start], smallarr,osize+1);
}
void printSubsetSumToK(int input[], int size, int k) {
    int output[100000];
    helper( input, size , 0 , k, output,0);
}

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
