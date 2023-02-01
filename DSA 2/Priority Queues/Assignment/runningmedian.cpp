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
