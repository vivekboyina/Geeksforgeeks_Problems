// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        arr.insert(arr.begin(),arr[arr.size() - 1]);
        arr.pop_back();
    }
};