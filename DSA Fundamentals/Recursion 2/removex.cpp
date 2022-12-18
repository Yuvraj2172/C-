#include <bits/stdc++.h>
using namespace std;
int length(char s[]){
    int len=0;
    for(int i=0; s[i]!='\0';i++)len++;
    return len;
}
void removeX(char s[])
{
    if(s[0]=='\0')return;
    if(s[0]=='x'){
        int len = length(s);
        int i=0;
        while(s[i]!='\0'){
            s[i]=s[i+1];
            i++;
        }
        s[i]='\0';
        return removeX(s);
    }
     return removeX(s+1);
}
int main()
{
    char s[] = "xxxxxaxxxxxxxxx";
    removeX(s);
    cout << s << "\n";
}