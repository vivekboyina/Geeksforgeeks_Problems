// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        while(head != nullptr)
        {
            if(head -> data == x) return true;
            head = head -> next;
        }
        return false;
    }
};