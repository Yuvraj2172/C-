#include <bits/stdc++.h>
using namespace std;
bool canConstruct(string target, vector<string> &arr,map<string, int > &mp)
{
    if(mp[target])return mp[target];
    if (target == "")
        return 1;
    for (auto it : arr)
    {
        bool isPrefix = mismatch(it.begin(), it.end(), target.begin(), target.end()).first == it.end();
        if(isPrefix){
            string suffixstr = target.substr(it.size());
            if(canConstruct(suffixstr, arr, mp)){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<string> arr ={"bo", "rd", "ate", "t","ska", "sk","boar"};
    string target = "skateboard";
    map<string, int> mp;
    cout<<canConstruct(target, arr,mp)<<endl;
    mp.clear();
    vector<string> arr2= {"ab", "abc", "cd", "def", "abcd"};
    string target2 ="abcdef";
    cout<<canConstruct(target2, arr2,mp)<<endl;

    //to find a string is prefix or not 
    // string prefix = "foo";
    // string s = "foobar";

    // bool isPrefix = mismatch(prefix.begin(), prefix.end(),s.begin(), s.end()).first == prefix.end();
    // if(isPrefix){
    //     string str = s.substr(prefix.size() );
    //     cout<<str;
    // }
}