#include <bits/stdc++.h>
using namespace std;
void helper(string target, vector<string> &arr, vector<vector<string>> &ans, vector<string> &temp,map<string, int>& mp)
{   
    if(mp.find(target)!= mp.end()){
        return;
    }
    if (target == "")
    {
        ans.push_back(temp);
        // return;
    }
    for (auto it : arr)
    {
        bool issuffixstr = mismatch(it.begin(), it.end(), target.begin(), target.end()).first == it.end();
        if (issuffixstr)
        {
            string newtarget = target.substr(it.size());
            temp.push_back(it);
            mp[it] = 1;
            helper(newtarget, arr, ans, temp,mp);
            temp.pop_back();
        }
    }
    return;
}
vector<vector<string>> allconstruct(string target, vector<string> arr)
{
    vector<string> temp;
    map<string, int> mp;
    vector<vector<string>> ans;
    helper(target, arr, ans, temp,mp);
    return ans;
}
void print(vector<vector<string>> arr)
{
    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    string target = "purple";
    vector<string> arr = {"purp", "p", "ur", "le", "purpl"};
    vector<vector<string>> ans = allconstruct(target, arr);
    print(ans);
    vector<string> arr2 = {"ab", "abc", "cd", "def", "abcd", "ef", "c"};
    string target2 = "abcdef";
    ans.clear();
    ans = allconstruct(target2, arr2);
    print(ans);
    ans.clear();
    string target4 = "eeeeeeeeeeeeeef";
    vector<string> arr4 = {"e", "ee", "eee","eeee","eeee","eeeee"};
    ans = allconstruct(target4, arr4);
    print(ans);
}

