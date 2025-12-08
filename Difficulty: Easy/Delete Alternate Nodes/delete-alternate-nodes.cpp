/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node *t = head,*c = head;
        while(c != nullptr && c -> next != nullptr)
        {
            c = c -> next -> next;
            t -> next = c;
            t = t -> next;
        }
    }
};