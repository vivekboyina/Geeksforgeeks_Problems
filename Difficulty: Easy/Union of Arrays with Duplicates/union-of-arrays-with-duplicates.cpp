class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>st;
        for(int i : a) st.insert(i);
        for(int i : b) st.insert(i);
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};