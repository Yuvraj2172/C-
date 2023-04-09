#include<bits/stdc++.h>


class Timebased {
    public:
     map<string, map<int, string, greater<int>>> mp;
        Timebased() {
           
        }

    void setKey(string key, string val, int timestamp) {
        mp[key][timestamp] = val;
    }

    string getValue(string targetKey, int targetTimestamp) {
        if(mp.count(targetKey)==0)return "-1";
        auto it = mp[targetKey].lower_bound(targetTimestamp);
        if(it == mp[targetKey].end())return "-1";
        return it->second;
    }
};
