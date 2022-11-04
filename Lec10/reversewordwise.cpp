#include <iostream>
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
void reversestring(char input[])
{
    int len = length(input);
    for (int i = 0; i < len / 2; i++)
    {
        // swap(input[i], input[len - 1 - i]);
        int temp = input[i];
        input[i]=input[len-1-i];
        input[len-1-i]=temp;
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
        int k=0;
        while(k<wordlen/2){
            // swap(input[k+j],input[j+wordlen -1-k]);
            int temp = input[k+j];
            input[k+j] = input[j+wordlen-1-k];
            input[j+wordlen-1-k] =temp;

            k++;
        }
        i = i + wordlen + 1;
    }
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
