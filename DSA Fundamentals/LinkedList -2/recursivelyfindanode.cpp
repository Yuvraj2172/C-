int findNodeRec(Node *head, int n)
{
	if(head==NULL) return -1;
	if(head->data==n)return 0;
	int ans = findNodeRec(head->next,  n);
	if(ans==-1)return  -1;
	return ans+1;
}