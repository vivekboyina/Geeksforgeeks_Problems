class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        vector<int>ans;
        ans.push_back(root -> data);
        queue<Node*>q;
        q.push(root);
        int c = 0;
        while(!q.empty())
        {
            int n = q.size();
            vector<int>r;
            c+=1;
            for(int i = 0; i < n; i++)
            {
                Node* t = q.front();
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
            if(r.size() > 0)
            {
                if(c % 2 == 0) reverse(r.begin(),r.end());
                ans.insert(ans.end(),r.begin(),r.end());
            }
        }
        return ans;
    }
};