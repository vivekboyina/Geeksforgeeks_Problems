/* Linked List Node structure
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
class Solution {
  public:
    void moveZeroes(struct Node*& head) {
        // code here
        if(head == nullptr || head -> next == nullptr) return;
        Node *z = nullptr,*nz = nullptr,*ans,*anz,*c = head;
        while(head != nullptr)
        {
            if(head -> data == 0)
            {
                if(z == nullptr)
                {
                    z = new Node(0);
                    ans = z;
                }
                else
                {
                    z -> next = new Node(0);
                    z = z -> next;
                }
            }
            else
            {
                if(nz == nullptr)
                {
                    nz = new Node(head -> data);
                    anz = nz;
                }
                else
                {
                    nz -> next = new Node(head -> data);
                    nz = nz -> next;
                }
            }
            head = head -> next;
        }
        if(z != nullptr && nz != nullptr) 
        {
            z -> next = anz;
            head = ans;
        }
        else if(z == nullptr) head = anz;
        else if(nz == nullptr) head = ans;
    }
};