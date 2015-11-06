//A program to check if a binary tree is BST or not
//There are four ways to solve the problem.
//Best way to do that, find InOrder traversal of Binary tree. If it is in ascending order then it is BST.
//http://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

bool isBST(struct node* root)
{
    static struct node *prev = NULL;
     
    // traverse the tree in inorder fashion and keep track of prev node
    if (root)
    {
        if (!isBST(root->left))
          return false;
 
        // Allows only distinct valued nodes 
        if (prev != NULL && root->data <= prev->data)
          return false;
 
        prev = root;
 
        return isBST(root->right);
    }
 
    return true;
} 

