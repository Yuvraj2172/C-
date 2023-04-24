// You are given an array containing 'N' points in the plane. The task is to find out the distance of the closest points.
#include<bits/stdc++.h>
long helper(pair<int , int>& p1 , pair<int , int>& p2){
    long distance  =  long((long)pow(p1.first - p2.first,2) + (long)pow(p1.second - p2.second,2));
    return distance;
}
long closestPair(pair<int, int>* coordinates, int n)
{
   long ans=LLONG_MAX;
   for(int i=-0; i < n-1 ;i++){
       for(int j = i +1 ; j< n;j++){
           ans = min( ans , helper(coordinates[i], coordinates[j]));
       }
   }
   return ans;
}

