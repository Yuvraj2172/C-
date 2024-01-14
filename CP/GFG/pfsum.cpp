#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int prefsum[n];
    prefsum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefsum[i] = prefsum[i - 1] + a[i];
    }
    int l,r;
    cin>>l>>r;
    if(l!=0){
        cout<<prefsum[r]- prefsum[l-1];
    }
    else {
        cout<<prefsum[r];
    }
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    //     cout << prefsum[i] << " ";
}