// You are given a stream of 'N' integers. For every 'i-th' integer added to the running list of integers, print the resulting median.
// Print only the integer part of the median.
#include<bits/stdc++.h>
// brute force - TLE.
void findMedian(int *arr, int n)
{
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
        sort(v.begin(), v.end());
        if(v.size()%2!=0)cout<<v[v.size()/2]<<" ";
        else {
            int median = (v[v.size()/2] + v[(v.size()-1)/2])/2;
            cout<<median<<" ";
        }

    }
}

//optimized way - Piority Queue
#include<bits/stdc++.h>
void findMedian(int *arr, int n)
{
    priority_queue<int> maxheap;
    priority_queue<int , vector<int> , greater<int>> minheap;
    for(int i=0;i<n;i++){
        if(i==0){
            maxheap.push(arr[i]);
        }
        else {
            if(arr[i] < maxheap.top())maxheap.push(arr[i]);
            else minheap.push(arr[i]);
        }
        if(int(maxheap.size() - minheap.size()) > 1){
            int x = maxheap.top();
            maxheap.pop();
            minheap.push(x);
        }
        if(int(minheap.size() - maxheap.size()) >1){
            int x = minheap.top();
            minheap.pop();
            maxheap.push(x);
        }
        int c = maxheap.size() + minheap.size();
        if(c%2==0){
            cout<<(maxheap.top() + minheap.top())/2<<" ";
        }else {
            if(maxheap.size() > minheap.size())cout<<maxheap.top()<<" ";
            else cout<<minheap.top()<<" ";
        }
    }
}