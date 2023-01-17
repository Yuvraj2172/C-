#include <queue>
void reverseQueue(queue<int> &input) {
	if(input.empty())return;
	int data= input.front();
	input.pop();
	reverseQueue(input);
	input.push(data);
}