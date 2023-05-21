#include<bits/stdc++.h>
using namespace std;
void bestSumHelper(int target , vector<int>&arr, int index , int n , vector<int>&temp , vector<vector<int>>&ans){
    if(index == n){
        if(target == 0){
            ans.push_back(temp);
            return;
        }return;
    }
    if(arr[index]<= target){
        temp.push_back(arr[index]);
        bestSumHelper(target-arr[index], arr , index, n , temp , ans);
        temp.pop_back();
    }
    bestSumHelper(target, arr , index+1, n , temp , ans);       

}
vector<vector<int>> bestSum(int target , vector<int>& arr){
    int index =0;
    int n = arr.size();
    vector<int> temp;
    vector<vector<int>> ans;
    bestSumHelper(target,arr, index , n , temp , ans);
    return ans;

}
int main(){

    vector<int> arr={2,3,5};
    int target = 50;
    vector<vector<int>> ans= bestSum(target , arr);
    int minSize = INT_MAX;
    for(int i=0; i< ans.size();i++){
        minSize = (ans[i].size() < minSize) ? ans[i].size() : minSize;
    }
   for(auto it : ans[minSize]){
        cout<<it<<" ";    
   }
}