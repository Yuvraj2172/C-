void printkdistanceNodeDown(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL || k < 0)
        return;
    if (k == 0)
    {
        cout << root->data << endl;
        return;
    }
    printkdistanceNodeDown(root->left, k - 1);
    printkdistanceNodeDown(root->right, k - 1);
}
int printkdistanceNode(BinaryTreeNode<int> *root, int target, int k)
{
    if (root == NULL)
        return -1;
    if (root->data == target)
    {
        printkdistanceNodeDown(root, k);
        return 0;
    }

    int dl = printkdistanceNode(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
            cout << root->data << endl;
        else
            printkdistanceNodeDown(root->right, k - dl - 2);
        return 1 + dl;
    }
    int dr = printkdistanceNode(root->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
            cout << root->data << endl;
        else
            printkdistanceNodeDown(root->left, k - dr - 2);
        return 1 + dr;
    }
    return -1;
}
void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k)
{
    int x = printkdistanceNode(root, node, k);
}