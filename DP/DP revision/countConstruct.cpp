#include <bits/stdc++.h>
using namespace std;
int countConstruct(string target, vector<string> &arr, map<string, int>&mp)
{
    if(mp.find(target)!= mp.end())return mp[target];
    if (target == "")
        return 1;
    int totalWays = 0;
    for (auto it : arr)
    {
        bool isPrefix = mismatch(it.begin(), it.end(), target.begin(), target.end()).first == it.end();
        if (isPrefix)
        {
            string suffixstr = target.substr(it.size());
            int remWays =  countConstruct(suffixstr, arr,mp);
            totalWays += remWays;
        }
       
    }
    mp[target] = totalWays;
    return totalWays;
}
int main()
{
    map<string, int> mp;
    string target = "abcdef";
    vector<string> arr= {"ab", "abc", "cd", "def", "abcd"};
    cout << countConstruct(target, arr,mp) << "\n";
    mp.clear();
    vector<string> arr2 ={"bo", "rd", "ate", "t","ska", "sk","boar"};
    string target2 = "skateboard";
    cout<<countConstruct(target2, arr2,mp) << "\n";
    mp.clear();
    vector<string> arr3 = {"purp", "p","ur","le", "purpl"};
    string target3 = "purple";
    cout<<countConstruct(target3, arr3,mp) << "\n";
    mp.clear();
    string target4 = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef";
    vector<string> arr4 = {"e", "ee", "eee","eeee","eeee","eeeee"};
    cout<<countConstruct(target4, arr4,mp) << "\n";
    mp.clear();

}