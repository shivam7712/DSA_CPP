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
    Reverse the nodes from position left to right (1-indexed, inclusive)
    and return the head of the modified list.
*/

Node* reverse(Node* head)
{
    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr)
    {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

Node* reverseBetween(Node* head, int left, int right)
{
    if(left == right) return head;

    Node* leftP = nullptr;
    Node* leftN = nullptr;
    Node* rightN = nullptr;
    Node* rightNext = nullptr;

    Node* currNode = head;

    for(int i=1; i<=right; i++)
    {
        if(i < left) leftP = currNode;
        if(i == left) leftN = currNode;
        if(i == right)
        {
            rightN = currNode;
            rightNext = currNode->next;
        }

        currNode = currNode->next;
    }

    rightN->next = nullptr;
    rightN = reverse(leftN);

    if(leftP != nullptr)
    {
        leftP->next = rightN;
    }
    else
    {
        head = rightN;
    }

    leftN->next = rightNext;

    return head;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int left, right;
    cin >> left >> right;

    ll.head = reverseBetween(ll.head, left, right);

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
