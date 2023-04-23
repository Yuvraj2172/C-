//  Maximum length pair chain
// You are given ‘N’ pairs of integers in which the first number is always smaller than the second number i.e in pair (a,b) -> a < b always. Now we define a pair chain as the continuous arrangement of pairs in which a pair (c,d) can follow another pair (a,b) only when b < c.
// Find the length of the longest pair chain that can be formed using the given pairs.
#include<bits/stdc++.h>
bool comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int maxLengthChain(vector<pair<int, int>> &p, int n) {
    sort(p.begin(), p.end(), comp);
    int i=0;
     int j = 1;
     int cnt =1;
     while(j < n){
        if(p[i].second < p[j].first){
            cnt++;
            i=j;
            j++;
        }
        else j++;
     }
     return cnt;
}