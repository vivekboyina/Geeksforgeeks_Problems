/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head == nullptr) return true;
        Node *h = head -> next;
        while(h != nullptr && h != head) h = h -> next;
        return (h == head);
    }
};