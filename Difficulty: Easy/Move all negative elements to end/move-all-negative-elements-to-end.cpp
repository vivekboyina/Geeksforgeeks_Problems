class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int cnt = 0;
        for(int i : arr) if(i >= 0) cnt+=1;
        int i = 0,j = cnt;
        vector<int>ans(arr.size());
        for(int k : arr)
        {
            if(k >= 0) ans[i++] = k;
            else ans[j++] = k;
        }
        arr = ans;
    }
};