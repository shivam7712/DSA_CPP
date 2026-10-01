#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v)
    {
        val = v;
        next = nullptr;
    }
};

class LinkedList {
public:

    Node* head;
    Node* tail;
    vector<Node*> nodes;

    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void build(int n)
    {
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node* node = new Node(x);

            nodes.push_back(node);

            if(!head)
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
        }
    }
};

/*
    Implement only the function below.
    Return true if the linked list has a cycle, otherwise false.
*/

bool hasCycle(Node* head)
{
    Node* fast = head;
    Node* slow = head;

    while(fast!=nullptr && fast->next != nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow) return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int pos;
    cin >> pos;

    if(pos != -1)
        ll.tail->next = ll.nodes[pos];

    cout << (hasCycle(ll.head) ? "true" : "false") << '\n';

    return 0;
}
