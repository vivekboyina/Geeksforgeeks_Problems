/*
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* joinTheLists(Node* head1, Node* head2) {
        // code here
        if(head1 == nullptr) return head2;
        if(head2 == nullptr) return head1;
        Node *ans = head1;
        while(head1 -> next != nullptr) head1 = head1 -> next;
        head1 -> next = head2;
        return ans;
    }
};