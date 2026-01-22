// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        reverse(s.begin() , s.end());
        return s ;
    }
};
