class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int s = 0;
        Node *c = head;
        while(c != nullptr)
        {
            s++;
            c = c -> next;
        }
        int p = 0,ans = 0;
        Node *a = head;
        while(a != nullptr)
        {
            p++;
            if(p > (s - n)) ans+=(a -> data);
            a = a -> next;
        }
        return ans;
    }
};