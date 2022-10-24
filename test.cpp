#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n<2){
    cout<<INT_MIN;
  }
  int i;
  cin>>i;
  int largest =i ;
  int secondlarget=INT_MIN;
  while(n-->0){
    int x;
    cin>>x;
    if(x>secondlarget && x<largest){
        secondlarget=x;
    }
  }
  cout<<secondlarget;

}