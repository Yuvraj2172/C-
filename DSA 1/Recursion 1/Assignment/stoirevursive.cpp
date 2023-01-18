#include <bits/stdc++.h>
using namespace std;
int length(char input[])
{
    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
void stringToNumberhelper(char input[], int start, int &n)
{
    if (input[start] == '\0')
        return;
    n = (n*10)+input[start] - 48;
    stringToNumberhelper(input, start + 1, n);
}
int stringToNumber(char input[])
{
    int n = 0;

    stringToNumberhelper(input, 0, n);

    return n;
}

int main()
{
    char input[1000] = "0001023";
    int x = stringToNumber(input);
    // cout<<(input);
    // for(int i=0;input[i]!='\0';i++)cout<<input[i]+0<<" ";
    cout<<x;
}