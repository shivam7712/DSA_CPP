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
    Reorder the list in place from
        L0 -> L1 -> ... -> Ln-1
    to
        L0 -> Ln-1 -> L1 -> Ln-2 -> L2 -> ...
    Do not return anything; modify the list in place.
*/

Node* reverse(Node* head)
{
    if(head->next == nullptr) return head;
    Node* prev = nullptr;
    Node* ptr = head;
    while(ptr!=nullptr)
    {
        auto next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    return prev;
}

Node* findMid(Node* head)
{
    if(head->next == nullptr) return head;
    auto fast = head->next;
    auto slow = head;

    while(fast!=nullptr && fast->next!=nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

void reorderList(Node* head)
{
    auto mid = findMid(head);
    auto revHead = reverse(mid->next);
    mid->next=nullptr;
    auto fList = head;
    auto sList = revHead;
    while(fList!=nullptr && sList!=nullptr)
    {
        auto fn = fList->next;
        auto sn = sList->next;
        fList->next=sList;
        fList=fn;
        sList->next=fList;
        sList=sn;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    reorderList(ll.head);

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
