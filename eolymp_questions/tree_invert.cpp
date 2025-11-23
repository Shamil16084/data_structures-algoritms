TreeNode* Invert(TreeNode* tree)
{
TreeNode * tmp = tree->right;
tree->right = tree->left;
tree->left = tmp;
return tree;
}