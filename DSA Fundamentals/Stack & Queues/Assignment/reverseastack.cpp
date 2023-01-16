//  Reverse a Stack
// You have been given two stacks that can store integers as the data. Out of the two given stacks, one is populated and the other one is empty. You are required to write a function that reverses the populated stack using the one which is empty.

void reverseStack(stack<int> &input, stack<int> &extra) {
    stack<int> st;
    while(!input.empty()){
        st.push(input.top());
        input.pop();
    }
    while(!st.empty()){
        extra.push(st.top());
        st.pop();
    }
    while(!extra.empty()){
        input.push(extra.top());
        extra.pop();
    }
}