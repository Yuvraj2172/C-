// Given an integer array A of size N, check if the input array can be splitted in two parts such that -

// - Sum of both parts is equal
// - All elements in the input, which are divisible by 5 should be in same group.
// - All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
// - Elements which are neither divisible by 5 nor by 3, can be put in any group.

// Groups can be made with any set of elements, i.e. elements need not to be continuous. And you need to consider each and every element of input array in some group.
// Return true, if array can be split according to the above rules, else return false.

#include <iostream>
using namespace std;
bool helper(int *input, int size , int start , int ls , int rs){
    if(start==size) return ls==rs;
    if(input[start]%5==0)ls+=input[start];
    else if(input[start]%3==0)rs+=input[start];
    else {
        return helper(input , size , start+1 ,ls+ input[start], rs) || helper(input , size , start+1 , ls , rs + input[start]);
    }
    return helper(input, size , start+1 , ls , rs);
}
bool splitArray(int *input, int size) {
    helper(input , size , 0,0,0);  
}
int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}