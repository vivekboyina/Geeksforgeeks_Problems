/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        if(arr.size() == 0) return nullptr;
        Node *head = new Node(arr[0]);
        Node *ans = head;
        for(int i = 1; i < arr.size(); i++)
        {
            Node *t = new Node(arr[i]);
            head -> next = t;
            head = head -> next;
        }
        return ans;
    }
};