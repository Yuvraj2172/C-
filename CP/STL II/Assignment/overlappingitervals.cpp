//  Overlapping Intervals
// You have been given the start and end times of 'N' intervals. Write a function to check if any two intervals overlap with each other.
#include<bits/stdc++.h>
bool checkOverlappingIntervals(long* start, long* end, int n)
{
   vector<pair<int, int>> intervals;
   for(int i=0;i<n;i++){
       intervals.push_back({start[i], end[i]});
   }
   sort(intervals.begin(), intervals.end());
   for(int i=1 ;i<n;i++){
       if( intervals[i].first < intervals[i-1].second )return true;
   }
    return false;
}
