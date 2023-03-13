#include <bits/stdc++.h>
using namespace std;
#define emplace_back em;
int main()
{

    long long n, r;
    cin >> n >> r;
    double sum=1;
    for (int i = 1; i <= r; i++)
    {
        sum = sum * (n - r + i) / i;
    }
    cout << (int)sum << endl;

    return 0;
}