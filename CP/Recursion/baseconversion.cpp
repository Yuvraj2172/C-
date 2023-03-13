#include <bits/stdc++.h>
using namespace std;
#define emplace_back em;
#define ll long long;
void helper(int n, string& str){
    if(n==0)return;
    int temp = n%2;
    char ch = temp + 48;
    str = ch + str;
    helper(n/2, str);
}
string baseConvert(int n){
    string str="";
    helper(n , str);
    return str;
}

int main()
{       int tc;
        cin>>tc;
        while(tc--){
        int n;
        cin >> n;
        string ans = baseConvert(n);
        cout << ans << "\n";
        }
    return 0;
}