#include <iostream>
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

    LinkedList()
    {
        head = nullptr;
    }

    void build(int n)
    {
        Node* tail = nullptr;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node* node = new Node(x);

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
    Merge two sorted (non-decreasing) lists into one sorted list and return
    the head of the merged list. Either list may be empty (nullptr).
*/

Node* mergeTwoLists(Node* l1, Node* l2)
{
    Node* dummy = new Node(-101);
    auto tail = dummy;
    auto p1 = l1;
    auto p2 = l2;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->val < p2->val)
        {
            tail->next = p1;
            tail = p1;
            p1 = p1->next;
        }
        else
        {
            tail->next = p2;
            tail = p2;
            p2 = p2->next;
        }
    }

    if(p1 != NULL) tail->next = p1;
    if(p2 != NULL) tail->next = p2;

    return dummy->next;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1;
    cin >> n1;

    LinkedList a;
    a.build(n1);

    int n2;
    cin >> n2;

    LinkedList b;
    b.build(n2);

    Node* head = mergeTwoLists(a.head, b.head);

    Node* cur = head;

    bool first = true;

    while(cur)
    {
        if(!first)
        {
            cout << ' ';
        }

        first = false;

        cout << cur->val;

        cur = cur->next;
    }

    cout << '\n';

    return 0;
}
