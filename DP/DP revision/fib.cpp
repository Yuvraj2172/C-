#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fib(int n, vector<ll> &v)
{
    if (v[n] != -1)
    {
        return v[n];
    }
    v[n] = fib(n - 1, v) + fib(n - 2, v);
    return v[n];
}
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n + 1, -1);
    v[0] = 0;
    v[1] = 1;
    cout << fib(n, v);
}