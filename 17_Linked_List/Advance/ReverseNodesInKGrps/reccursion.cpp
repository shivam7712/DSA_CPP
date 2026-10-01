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

Node* reverseKGroup(Node* head, int k)
{

    if(head == nullptr || head->next == nullptr) return head;

    Node* kth = new Node(0);
    Node* toDel = kth;
    kth->next = head;

    for(int i = 0; i < k; i++)
    {
        if(kth->next == nullptr) return head;
        kth = kth->next;
    }

    Node* newHead = reverseKGroup(kth->next, k);

    Node* prev = newHead;
    Node* curr = head;


    for(int i=0; i<k; i++)
    {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    delete toDel;
    return prev;



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int k;
    cin >> k;

    ll.head = reverseKGroup(ll.head, k);

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
