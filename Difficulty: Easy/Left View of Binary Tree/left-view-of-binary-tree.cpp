class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        if(root == nullptr) return ans;
        queue<Node*>q;
        q.push(root);
        ans.push_back(root -> data);
        while(!q.empty())
        {
            int n = q.size(),c = 0;
            for(int i = 0; i < n; i++)
            {
                Node *t = q.front();
                if(t -> left != nullptr)
                {
                    q.push(t -> left);
                    if(c == 0)
                    {
                        ans.push_back(t -> left -> data);
                        c = 1;
                    }
                }
                if(t -> right != nullptr)
                {
                    q.push(t -> right);
                    if(c == 0)
                    {
                        ans.push_back(t -> right -> data);
                        c = 1;
                    }
                }
                q.pop();
            }
        }
        return ans;
    }
};