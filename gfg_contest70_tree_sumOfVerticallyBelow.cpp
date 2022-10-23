void recursion(TreeNode<int>* node, vector<int> &ans, int distance) {

    // If distance equals zero push the current Node.
    if (distance == 0) {
        ans.push_back(node->data);
    }

    // Check if left child is not NULL.
    if (node->left != NULL) {
        recursion(node->left, ans, distance - 1);
    }

    // Check if right child is not NULL.
    if (node->right != NULL) {
        recursion(node->right, ans, distance + 1);
    }

}

vector<int> verticallyBelowNodes(TreeNode<int>* root) {

    // Vector to store final answer.
    vector<int> ans;

    // Function Call.
    if (root->left != NULL) {
        recursion(root->left, ans, -1);
    }

    // Function Call.
    if (root->right != NULL) {
        recursion(root->right, ans, 1);
    }

    /*
        If no node satisfies the given condition push
        -1 to the empty vector
    */
    if (ans.size() == 0) {
        ans.push_back(-1);
    }
    return ans;
}
