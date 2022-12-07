#include <bits/stdc++.h>
using namespace std;
void replacePi(char input[])
{
    int len = strlen(input);
    char str[100000];
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == 'p' && input[i + 1] == 'i')
        {
            str[k] = '3';
            str[k + 1] = '.';
            str[k + 2] = '1';
            str[k + 3] = '4';
            k += 4;
            i += 1;
        }
        else
        {
            str[k]= input[i];
            k += 1;
        }
    }
    for (int i = 0; i < strlen(str); i++)
    {
        input[i] = str[i];
    }
}

int main()
{
    char input[] = "pippiippip";
    replacePi(input);
    cout << input << endl;
}