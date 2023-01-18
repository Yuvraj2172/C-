/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/


class Stack {
	Node* head;
    int size;
   public:
    Stack() {
        head=NULL;
        size =0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
       return size;
    }

    bool isEmpty() {
       return head==NULL;
    }

    void push(int element) {
        Node* newnode = new Node(element);
        newnode->next = head;
        head= newnode;
        size++;
    }

    int pop() {
       if(head==NULL)return -1;
       int temp = head->data;
       head = head->next;
       size--;
       return temp;
    }

    int top() {
        if(head==NULL)return -1;
        return head->data;
    }
};