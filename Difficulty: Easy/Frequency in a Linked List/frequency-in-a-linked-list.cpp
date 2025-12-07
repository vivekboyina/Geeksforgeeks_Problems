/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int cnt = 0;
        while(head != nullptr)
        {
            if(head -> data == key) cnt++;
            head = head -> next;
        }
        return cnt;
    }
};