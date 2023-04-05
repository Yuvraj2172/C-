#include<bits/stdc++.h>
using namespace std;
#define emplace_back em;
#define ll long long;
void fs(int &number){
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-'){
     negative = true;
    c = getchar();}
    for (; (c>47 && c<58); c=getchar())
    number = number *10 + c - 48;
    if (negative)
    number *= -1;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int tc; fs(tc);
    while(tc--){
    
    }
return 0;
}