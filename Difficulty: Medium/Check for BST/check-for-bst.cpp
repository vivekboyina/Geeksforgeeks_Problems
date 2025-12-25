class Solution {
  public:
    vector<int>a;
    void dfs(Node* root)
    {
        if(root == nullptr) return;
        dfs(root -> left);
        a.push_back(root -> data);
        dfs(root -> right);
    }
    bool isBST(Node* root) {
        dfs(root);
        for(int i = 0; i < a.size() - 1; i++) if(a[i] > a[i + 1]) return false;
        return true;
    }
};