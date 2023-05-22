#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 7;
    vector<int> arr = {2, 2};
    vector<int> table(target + 1, 0);
    // for(auto it :table)cout<<it<<": ";
    table[0] = 1;
    for (int i = 0; i <= target; i++)
    {
        if (table[i] == 1)
        {
            for (int j = 0; j < arr.size(); j++)
            {
                table[i + arr[j]] = 1;
            }
        }
    }
    cout << table[target];
}