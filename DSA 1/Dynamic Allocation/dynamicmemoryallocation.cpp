#include<iostream>
using namespace std;
int main(){
    Allocating integer on Heap
   int *p = new int;
   cin>>*p;
   cout<<*p<<endl;

Allocating Array on heap.
    int *arr = new int [10];
    
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int *pa2=new int[n]; // Array will be created on runtime rather than at compile time.
   for(int i=0;i<n ; i++){
    cin>>pa2[i];
   }
   int max = -1;
    for(int i=0;i<n;i++){
        if(pa2[i]>max)max=pa2[i];
    }
    cout<<"Max is : "<<max<<endl;

    // Memory Usage will be increased ... Can verify with the help of Task Manager...
    // while (true)
    // {
    //     int* i= new int;
    // This dynamic memory can be cleared up by delete keyword... Variable will not be deleted itself but the integer it is pointing to will be deleted. 
    // Syntax : delete variable_name;
    // }

    // Syntax to delete array delcared on heap
    // int *p= new int[1000];
    // delete []p;


    // No Memory Usage will be increased ... Can verify with the help of Task Manager...
    // while(true){
    //     int i=10;
    
    // }
    
}