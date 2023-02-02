// You are given an array of integers that contain numbers in random order. Write a program to find and return the number which occurs the maximum times in the given input.
// If two or more elements contend for the maximum frequency, return the element which occurs in the array first.
#include<bits/stdc++.h>
int highestFrequency(int arr[], int n) {
    unordered_map<int, int> mp;
    int maxfreq = -1;
    for(int i=0; i<n;i++){
        mp[arr[i]]++;
        maxfreq = max(maxfreq,mp[arr[i]]);
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]== maxfreq)return arr[i];
    }
    return -1;
}a