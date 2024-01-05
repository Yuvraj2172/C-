#include <bits/stdc++.h>
using namespace std;
int bsearch(vector<int> &arr, int key)
{
    int n = arr.size();
    int lg = log2(n - 1) + 1;
    int pos = 0;
    for (int i = lg; i >= 0; i--)
    {
        if (arr[pos] == key)
            return pos;

        int newpos = pos | (1 << i);

        if ((newpos < n) && (arr[newpos] <= key))
        {
            pos = newpos;
        }
    }
    return ((arr[pos] == key) ? pos : -1);
}
int main()
{
    vector<int> A = {-2, 10, 100, 250, 32315};
    cout << bsearch(A, 10) << endl;

    return 0;
}
