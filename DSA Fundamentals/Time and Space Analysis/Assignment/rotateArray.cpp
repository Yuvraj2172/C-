#include <iostream>
using namespace std;
void swapElements(int *input, int start, int end)
{
    int temp = input[start];
    input[start] = input[end];
    input[end] = temp;
}
void reverse(int *input, int start, int end)
{
    int i = start;
    int j = end;
    while (i < j)
    {
        swapElements(input, i, j);
        i++;
        j--;
    }
}
void rotate(int *input, int d, int n)
{
    if (n == 0)
        return;
    int k = d % n;
    reverse(input, 0, n - 1);
    reverse(input, 0, n - k - 1);
    reverse(input, n - k, n - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}