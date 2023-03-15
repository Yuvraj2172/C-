#include<bits/stdc++.h>
using namespace std;

auto cmp = [](int a, int b){
    return a>b; //min heap using comparator function...
};
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //max heap
    priority_queue<int> pq_max;

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;

    //priority-queue with comparator function
    priority_queue<int , vector<int> , decltype(cmp)> pq_cmp(cmp);

    for(int i=0;i<n;i++){
        pq_min.push(a[i]);
        pq_max.push(a[i]);
        pq_cmp.push(a[i]);
    }
    while(!pq_min.empty()){
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }
    cout<<"\n";

    while(!pq_max.empty()){
        cout<<pq_max.top()<<" ";
        pq_max.pop();
    }
    cout<<"\n";

    while(!pq_cmp.empty()){
        cout<<pq_cmp.top()<<" ";
        pq_cmp.pop();
    }
    cout<<"\n";

}
int main(){
    solve();
}