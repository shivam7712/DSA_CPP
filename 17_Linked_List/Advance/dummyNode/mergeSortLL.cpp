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
    Sort the linked list in ascending order and return the new head.
*/


Node* findMiddle(Node* head)
{
    auto fast = head->next;
    auto slow = head;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* mergeList(Node* fLL, Node* sLL)
{
    Node* dummy = new Node(-1);
    Node* ptr = dummy;
    Node* f = fLL;
    Node* s = sLL;
    while(f != nullptr && s != nullptr)
    {
        if(f->val < s->val)
        {
            ptr->next = f;
            ptr = f;
            f = f->next;
        }
        else
        {
            ptr->next = s;
            ptr = s;
            s = s->next;
        }
    }

    if(f != nullptr) ptr->next = f;
    if(s != nullptr) ptr->next = s;

    return dummy->next;
}

Node* sortList(Node* head)
{

    if(head == nullptr || head->next == nullptr) return head;

    auto mid = findMiddle(head);
    auto midN = mid->next;
    mid->next = nullptr;

    auto firstHalf = sortList(head);
    auto secondHalf = sortList(midN);

    auto headOfMergeList = mergeList(firstHalf, secondHalf);
    return headOfMergeList;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    ll.head = sortList(ll.head);

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
