class Node{
    constructor(val){
        this.val = val;
        this.next= null;
    }
}

const a  =new Node('A');
const b = new Node('B');
const c = new Node('C');
const d = new Node('D');
a.next = b;
b.next = c;
c.next = d;
// A->B->C->D
// console.log(a.next.val);

const printLinkedList=(head)=>{
    if(head==null)return;
    let temp = head;
    let ans ='';
    while(temp!=null){
        console.log(temp.val);
        temp = temp.next;
    }
    console.log(ans);
}

const printLinkedListRecursive =(head)=>{
    if(head== null)return;
    console.log(head.val);
    printLinkedListRecursive(head.next);
}
printLinkedList(a);
printLinkedListRecursive(a);