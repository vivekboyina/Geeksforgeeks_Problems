class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int a = arr[0],b = arr[0];
        for(int i : arr)
        {
            if(i > a) a = i;
            if(i < b) b = i;
        }
        return {b,a};
    }
};