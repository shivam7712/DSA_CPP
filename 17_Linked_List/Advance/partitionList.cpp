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
    Partition the list so that every node with value < x comes before every
    node with value >= x, preserving the original relative order within each
    of the two partitions. Return the head of the partitioned list.
*/

Node* partition(Node* head, int x)
{
    Node* dummy1 = new Node(-101);
    Node* dummy2 = new Node(-101);

    Node* d1 = dummy1;
    Node* d2 = dummy2;

    Node* curr = head;

    while(curr!=nullptr)
    {
        if(curr->val < x)
        {
            d1->next = curr;
            d1 = d1->next;
        }
        else
        {
            d2->next = curr;
            d2 = d2->next;
        }
        curr = curr->next;
    }

    d1->next = nullptr;
    d2->next = nullptr;

    if(dummy1->next != nullptr)
    {
        d1->next = dummy2->next;
        return dummy1->next;
    }
    return dummy2->next;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int x;
    cin >> x;

    ll.head = partition(ll.head, x);

    Node* cur = ll.head;

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
