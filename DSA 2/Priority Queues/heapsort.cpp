
#include <bits/stdc++.h>
using namespace std;
void inplateHeapSort(int pq[], int n)
{
    // BUild the heap in inoput array
    for (int i = 1; i < n; i++)
    {
        int childIndex = i;
        while (childIndex > 0)
        {
            int parenIndex = (childIndex - 1) / 2;
            if (pq[childIndex] < pq[parenIndex])
            {
                swap(pq[childIndex], pq[parenIndex]);
            }
            else
                break;
            childIndex = parenIndex;
        }
    }
    int size = n;
    while (size > 1)
    {
        int temp = pq[0];
        pq[0] = pq[size - 1];
        pq[size - 1] = temp;
        size-=1;

        int parentIndex = 0;
        int lci = 2 * parentIndex + 1;
        int rci = 2 * parentIndex + 2;
        while (lci < size)
        {
            int minIndex = parentIndex;
            if (pq[minIndex] > pq[lci])
            {
                minIndex = lci;
            }
            if (rci < size && pq[rci] < pq[minIndex])
                minIndex = rci;
            if (minIndex == parentIndex)
                break;
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;
            parentIndex = minIndex;

            lci = 2 * parentIndex + 1;
            rci = 2 * parentIndex + 2;
        }
    }
}
int main()
{
    int input[] = {5,1,2,0,8};
    inplateHeapSort(input , 5);
    for(int i=0;i<5;i++)cout<<input[i]<<" ";
}