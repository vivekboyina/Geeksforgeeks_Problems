class Solution {
  public:
    int ans = 0;
    void dfs(Node* root,int c)
    {
        if(root == nullptr)
        {
            ans = max(ans,c - 1);
            return;
        }
        dfs(root -> left,c + 1);
        dfs(root -> right,c + 1);
    }
    int height(Node* root) {
        dfs(root,0);
        return ans;
    }
};