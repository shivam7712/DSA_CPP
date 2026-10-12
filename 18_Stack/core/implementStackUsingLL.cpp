#include <iostream>
using namespace std;

/*
    Implement only the class below, using a singly linked list.
    void push(int x) -- insert x onto the top of the stack.
    int  pop()       -- remove and return the top element; return -1 if empty.
    int  top()       -- return the top element; return -1 if empty.
    bool empty()     -- return true if the stack is empty, else false.
    int  size()      -- return the number of elements in the stack.
    Every operation must run in O(1) time.
*/

class Node {
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtHead(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    int peek()
    {
        return head->val;
    }
    void removeAtHead()
    {
        Node* temp = head;
        head=head->next;
        delete temp;
    }

};

class MyStack {
private:
    int _size = 0;
public:

    LinkedList ll;

    void push(int x)
    {
        ll.insertAtHead(x);
        _size++;
    }

    int pop()
    {
        if(empty()) return -1;
        int result = top();
        ll.removeAtHead();
        _size--;
        return result;
    }

    int top()
    {
        if(empty()) return -1;
        return ll.peek();
    }

    bool empty()
    {
        return _size == 0;
    }

    int size()
    {
        return _size;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    MyStack st;

    string op;

    while (q--)
    {
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            st.push(x);
            cout << "null" << '\n';
        }
        else if (op == "pop")
        {
            cout << st.pop() << '\n';
        }
        else if (op == "top")
        {
            cout << st.top() << '\n';
        }
        else if (op == "empty")
        {
            cout << (st.empty() ? "true" : "false") << '\n';
        }
        else // size
        {
            cout << st.size() << '\n';
        }
    }

    return 0;
}
