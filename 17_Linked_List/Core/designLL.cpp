#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

class LinkedList
{
    private:
        Node* head;
        int size = 0;

    public:
        LinkedList()
        {
            head = nullptr;
        }

        int get(int index)
        {
            if(index < 0 || index >= size) return -1;
            Node* temp = head;
            for(int i=0; i<index; i++)
            {
                if(temp->next == nullptr) return -1;
                temp = temp->next;
            }
            return temp->data;
        }

        void addAtHead(int val)
        {
            Node* newNode = new Node(val);
            Node* temp = head;
            head = newNode;
            head->next = temp;
            size++;
        }

        void addAtTail(int val)
        {
            if(head == nullptr)
            {
                Node* newNode = new Node(val);
                head = newNode;
                size++;
                return;
            }

            Node* temp = head;

            while(temp->next != nullptr)
            {
                temp = temp->next;
            }

            Node* newNode = new Node(val);
            temp->next = newNode;
            size++;
        }

        void addAtIndex(int index, int val)
        {
            if(index <= 0)
            {
                addAtHead(val);
                return;
            }
            if(index == size)
            {
                addAtTail(val);
                return;
            }

            if(index > size) return;

            Node* ptr = head;

            for(int i=0; i<index-1; i++)
            {
                ptr = ptr->next;
            }

            Node* newNode = new Node(val);
            Node* temp = ptr->next;
            ptr->next = newNode;
            newNode->next = temp;
            size++;

        }
        void deleteAtIndex(int index)
        {
            if(index < 0 || index >= size) return;

            if(index == 0)
            {
                Node* temp = head;
                head = head->next;
                delete temp;
                size--;
                return;
            }

            Node* ptr = head;

            for(int i=0; i<index-1; i++)
            {
                ptr = ptr->next;
            }

            Node* temp = ptr->next;
            ptr->next = temp->next;
            delete temp;
            size--;
        }

        void printList()
        {
            if(head == nullptr) return;

            Node* temp = head;
            while(temp!=nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }

        }
};


int main()
{

    int n;
    cin >> n;

    LinkedList list;

    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;

        list.addAtTail(val);
    }


    int q;
    cin >> q;

    while(q--)
    {
        int op;
        cin >> op;

        if(op == 0)
        {
            int index;
            cin >> index;

            cout << list.get(index) << "\n";
        }
        else if(op == 1)
        {
            int val;
            cin >> val;
            list.addAtHead(val);
        }
        else if(op == 2)
        {
            int val;
            cin >> val;
            list.addAtTail(val);
        }
        else if(op == 3)
        {
            int index, val;
            cin >> index >> val;
            list.addAtIndex(index, val);
        }
        else
        {
            int index;
            cin >> index;
            list.deleteAtIndex(index);
        }
    }

    list.printList();

    return 0;
}
