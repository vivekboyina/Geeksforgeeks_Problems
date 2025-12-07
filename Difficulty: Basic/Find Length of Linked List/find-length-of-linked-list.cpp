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
    int getCount(Node* head) {
        // Code here
        int cnt = 0;
        while(head != nullptr)
        {
            cnt++;
            head = head -> next;
        }
        return cnt;
    }
};