class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ans = arr[0],r = arr[0];
        for(int i = 1; i < arr.size(); i++)
        {
            r = max(arr[i],r + arr[i]);
            ans = max(r,ans);
        }
        return ans;
    }
};