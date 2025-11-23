bool isMirror(TreeNode *left, TreeNode *right) {
    if (left == NULL && right == NULL) return true;
    if (left == NULL || right == NULL) return false;
    return (left->val == right->val) &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

bool isSymmetric(TreeNode *tree) {
    if (tree == NULL) return true;
    return isMirror(tree->left, tree->right);
}