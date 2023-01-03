#include <bits/stdc++.h>
using namespace std;
class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    DynamicArray(DynamicArray const &d)
    {
        // This will just perform shallow copy, which should be avoided.
        // this->data = data;
        // this->nextIndex = d.nextIndex;
        // this->capacity = d.capacity;

        // Deep Copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }
    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            capacity *= 2;
            data = newdata;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int get(int i)
    {
        if (i < nextIndex)
        {
            return data[i];
        }
        return -1;
    }
    void add(int index, int element)
    {
        if (index < nextIndex)
        {
            data[index] = element;
        }
        else if (index == nextIndex)
        {
            add(element);
        }
        return;
    }
    void print()
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << "\n";
    }
    void operator=(DynamicArray const &d)
    {
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }
};