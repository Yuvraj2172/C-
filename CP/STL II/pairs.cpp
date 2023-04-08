#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<pair<string, ll>> phone_book;
    phone_book.push_back({"Yuvraj", 7060642985});
    phone_book.push_back({"U", 7060642985});
    phone_book.push_back({"V", 7060642985});
    phone_book.push_back({"E", 7060642985});
    cout<<"Phone Book"<<"\n";
    for(auto it : phone_book)cout<<it.first<<" "<<it.second;
}