#include <iostream>
// #include "solution.h"
using namespace std;
int length(char input[])
{
    int len = 0;
    int i = 0;
    while (input[i] != '\0')
    {
        i++;
        len++;
    }
    return len;
}
int wordLength(char input[], int n)
{
    int wordlen = 0;
    int i = n;
    while (input[i] != ' ' && input[i] != '\0')
    {
        wordlen++;
        i++;
    }
    return wordlen;
}
void reverseword(char input[], int j)
{
    int wordlen = wordLength(input, 0);
    cout << wordlen;
}
void reversestring(char input[])
{
    int len = length(input);
    for (int i = 0; i < len / 2; i++)
    {
        swap(input[i], input[len - 1 - i]);
    }
}

void reverseStringWordWise(char input[])
{
    reversestring(input);
    int i = 0;
    while (input[i])
    {
        int wordlen = wordLength(input, i);
        int j = i;
        // cout << wordlen << " ";
        int k=0;
        while(k<wordlen/2){
            swap(input[k+j],input[j+wordlen -1-k]);
            k++;
        }
        // while (j < wordlen + i)
        // {
        //     cout << input[j];
        //     j++;
        // }
        // cout << endl;
        // for(j=i;j<(wordlen+i)/2;j++){
        //     swap(input[j],input[wordlen-1-j]);
        // }
        i = i + wordlen + 1;
        // cout<<"i for "<<i<<" word is : "<<i<<" ";
    }
}
int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    // cout<<wordLength(input,8);
    cout << input << endl;
}
