#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> table(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < table.size(); i++)
    {
        for (int j = 0; j < table[0].size(); j++)
        {
            table[i][j] = 0;
        }
    }
    table[1][1] = 1;
    // cout<<table[1][1] ;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            int current = table[i][j];
            if(i+1<= n)table[i+1][j] += current; // down
            if(j+1<=m) table[i][j+1]+= current; //right
        }
    }
    cout << table[n][m];
}