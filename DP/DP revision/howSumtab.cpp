#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 7;
    vector<int> arr = {5, 3, 4};
    vector<vector<int>> table(target + 1, vector<int>(0, 1));
    table[0] = {};
    for (int i = 0; i <= target; i++)
    {
        if (i == 0 || table[i].size() != 0)
        {
            vector<int> temp = table[i];
            for (int j = 0; j < arr.size(); j++)
            {
                temp.push_back(arr[j]);
                table[i + arr[j]] = temp;
            }
        }
    }
    for (int i = 0; i < table.size(); i++)
    {
        for (int j = 0; j < table[i].size(); j++)
        {
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }
}