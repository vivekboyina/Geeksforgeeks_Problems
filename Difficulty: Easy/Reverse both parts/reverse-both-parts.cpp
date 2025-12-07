// User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *reverse(Node *head, int k) {
        // code here
        Node *f = NULL,*s = NULL;
        int cnt = 0;
        while(head != NULL)
        {
            if(cnt < k)
            {
                Node *t = new Node(head -> data);
                t -> next = f;
                f = t;
                cnt++;
            }
            else
            {
                Node *t = new Node(head -> data);
                t -> next = s;
                s = t;
            }
            head = head -> next;
        }
        Node *ans = f;
        while(f -> next != nullptr) f = f -> next;
        f -> next = s;
        return ans;
    }
};