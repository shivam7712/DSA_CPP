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
    Return true if the linked list is a palindrome, otherwise false.
*/

Node* findMiddle(Node* head)
{
    if(head == nullptr || head->next == nullptr) return head;
    auto fast = head->next;
    auto slow = head;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* reverse(Node* head)
{
    Node* prev = NULL;
    auto ptr = head;
    while(ptr!=nullptr)
    {
        auto next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    return prev;
}

bool isPalindrome(Node* head)
{
    if(head->next == nullptr) return true;
    auto mid = findMiddle(head);
    auto midN = mid->next;
    mid->next = nullptr;
    auto revHead = reverse(midN);
    while(head!=nullptr && revHead!=nullptr)
    {
        if(head->val != revHead->val) return false;
        head=head->next;
        revHead=revHead->next;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    cout << (isPalindrome(ll.head) ? "true" : "false") << '\n';

    return 0;
}
