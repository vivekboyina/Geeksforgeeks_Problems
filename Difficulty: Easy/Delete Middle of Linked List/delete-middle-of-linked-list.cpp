/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head == nullptr || head -> next == nullptr) return nullptr;
        Node *p,*r = head,*t = head;
        while(r != nullptr && r -> next != nullptr)
        {
            r = r -> next -> next;
            p = t;
            t = t -> next;
        }
        p -> next = t -> next;
        return head;
    }
};