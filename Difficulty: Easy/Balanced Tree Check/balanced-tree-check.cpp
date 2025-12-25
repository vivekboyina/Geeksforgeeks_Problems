class Solution {
  public:
    bool f = true;
    int dfs(Node* root)
    {
        if(root == nullptr) return 0;
        int l = dfs(root -> left),r = dfs(root -> right);
        dfs(root -> left);
        dfs(root -> right);
        if(abs(l - r) > 1) f = false;
        return max(l,r) + 1;
    }
    bool isBalanced(Node* root) {
        dfs(root);
        return f;
    }
};