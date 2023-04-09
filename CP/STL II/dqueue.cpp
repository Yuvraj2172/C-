#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<ll> cust(t);
    for (int i = 0; i < t; i++)
    {
        cin >> cust[i];
    }
    sort(cust.begin(), cust.end());
    ll waitingtime = 0, satisfied = 0;
    for (int i = 0; i < t; i++)
    {
        if (waitingtime <= cust[i])
        {
            waitingtime += cust[i];
            satisfied += 1;
        }
    }
    cout << satisfied;
}
