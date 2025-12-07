/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node *f = nullptr;
        while(head != nullptr)
        {
            Node *t = new Node(head -> data);
            t -> next = f;
            f = t;
            head = head -> next;
        }
        return f;
    }
};