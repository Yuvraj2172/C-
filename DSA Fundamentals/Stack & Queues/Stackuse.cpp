#include<bits/stdc++.h>
using namespace std;
#include "StackUsingArray.cpp"
int main(){
    StackUsingArray st(4);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    cout<<st.size()<<endl;
    cout<<st.isEmpty();

}