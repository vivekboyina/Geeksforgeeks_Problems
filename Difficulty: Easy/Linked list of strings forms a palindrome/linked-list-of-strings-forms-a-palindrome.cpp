/*
The structure of linked list is the following
struct Node {
    string data;
    Node *next;

    Node(string x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string s = "";
        while(head != nullptr)
        {
            s+=(head -> data);
            head = head -> next;
        }
        string k = s;
        reverse(s.begin(),s.end());
        return (k == s);
    }
};