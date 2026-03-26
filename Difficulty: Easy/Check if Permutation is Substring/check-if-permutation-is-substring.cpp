// User function Template for C++
class Solution {
  public:
    bool search(string& txt, string& pat) {
        // Write your code here
        int k = pat.length();
        vector<char>t(26,0),p(26,0);
        for(char i : pat) p[i - 'a']++;
        for(int i = 0; i < k; i++) t[txt[i] - 'a']++;
        if(t == p) return true;
        for(int i = k; i < txt.length(); i++)
        {
            t[txt[i] - 'a']++;
            t[txt[i - k] - 'a']--;
            if(t == p) return true;
        }
        return false;
    }
};