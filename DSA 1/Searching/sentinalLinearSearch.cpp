#include<bits/stdc++.h>
using namespace std;
int sentinalLinearSearch(vector<int>& arr, int key){
	int n = arr.size();
	int last = arr[n-1];
	arr[n-1] = key;
	int i=0;
	while(arr[i]!=key){
		i++;
	}
	arr[n-1] = last;
	if( (i!=n-1) || last == key )return i;
	return -1;
}
int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	int key = 5;
	int index = sentinalLinearSearch(arr,key);
	
	if(index == -1){
		cout<<key<<" is not found in the array";
	}else {
		cout<< key << " is found at "<< index << " in the array.";
	}
}
