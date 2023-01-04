#include <bits/stdc++.h>
using namespace std;
#include "ll.cpp"
int main()
{
    Node n1(10);
    Node n2(20);
    n1.next = &n2;
    Node *head = &n1;
    cout << head->data << endl;
    cout << head->next->data << endl;
}