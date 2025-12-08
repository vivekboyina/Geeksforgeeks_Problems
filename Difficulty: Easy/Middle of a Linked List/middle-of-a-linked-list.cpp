/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node *r = head,*t = head;
        while(r != nullptr && r -> next != nullptr)
        {
            r = r -> next -> next;
            t = t -> next;
        }
        return t -> data;
    }
};