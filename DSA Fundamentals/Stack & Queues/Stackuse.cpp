#include<bits/stdc++.h>
using namespace std;
#include "StackUsingArray.h"
#include <stack>
int main(){
  /*  StackUsingArray st;
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
*/
   stack<int> s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);
   cout<<s.size()<<"\n";
   cout<<s.top()<<"\n";
   s.pop();
   cout<<s.top()<<"\n";
   cout<<s.size()<<"\n";
   cout<<s.empty()<<"\n";
}
