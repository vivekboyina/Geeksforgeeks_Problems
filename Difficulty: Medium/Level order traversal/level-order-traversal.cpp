class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        ans.push_back({root -> data});
        while(!q.empty())
        {
            vector<int>r;
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                Node *t = q.front();
                if(t -> left != nullptr)
                {
                    r.push_back(t -> left -> data);
                    q.push(t -> left);
                }
                if(t -> right != nullptr)
                {
                    r.push_back(t -> right -> data);
                    q.push(t -> right);
                }
                q.pop();
            }
            if(r.size() > 0) ans.push_back(r);
        }
        return ans;
    }
};