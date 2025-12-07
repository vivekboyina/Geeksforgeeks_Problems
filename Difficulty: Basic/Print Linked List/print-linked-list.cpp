/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> displayList(Node *head) {
        // code here
        vector<int>ans;
        while(head != NULL)
        {
            ans.push_back(head -> data);
            head = head -> next;
        }
        return ans;
    }
};