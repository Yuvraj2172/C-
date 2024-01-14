#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long a, n, d;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> n >> d;
        cout << a + (n - 1) * d;
        cout << endl;
    }
    return 0;
}