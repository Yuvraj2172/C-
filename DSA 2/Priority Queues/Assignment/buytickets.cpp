// You want to buy a ticket for a well-known concert which is happening in your city. But the number of tickets available is limited. Hence the sponsors of the concert decided to sell tickets to customers based on some priority.
// A queue is maintained for buying the tickets and every person is attached with a priority (an integer, 1 being the lowest priority).
#include<bits/stdc++.h>
int buyTicket(int *arr, int n, int k) {
    queue<int> p;
    for(int i=0;i<n;i++)p.push(i);
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int time =0;
    while(p.front() != k || pq.top() != arr[p.front()]){
        if(pq.top() > arr[p.front()]){
            int x = p.front();
            p.pop();
            p.push(x);
        }else if(pq.top()==arr[p.front()]){
            p.pop();
            pq.pop();
            time++;
            }
    }
    return time+1;
}