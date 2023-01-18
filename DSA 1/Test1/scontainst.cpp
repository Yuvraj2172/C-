// Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
// Return true or false.
// Do it recursively.
// E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
#include <iostream>
using namespace std;
int length(char arr[])
{
    int len = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}
bool Helper(char large[], int largeLen, char *small, int smallLen, int start, int lastIndex)
{
    if (small[start] == '\0')
        return true;
    int currIdx;
    for (int i = 0; i < largeLen; i++)
    {
        if (large[i] == small[start])
        {
            currIdx = i;
            if (currIdx > lastIndex)
            {
                lastIndex = currIdx;
                return Helper(large, largeLen, small, smallLen, start + 1, lastIndex);
            }
        }
    }

    return false;
}
bool checksequenece(char large[], char *small)
{
    int largeLen = length(large);
    int smallLen = length(small);
    Helper(large, largeLen, small, smallLen, 0, -1);
}
int main()
{
    char large[10000];
    char small[10000];
    cin >> large;
    cin >> small;
    bool x = checksequenece(large, small);

    if (x)
        cout << "true";
    else
        cout << "false";
}
