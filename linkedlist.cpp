#include<iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Insert at beginning
void insertAtBeginning(Node*& head, int value)
{
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(Node*& head, int value)
{
    Node* newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Display linked list
void display(Node* head)
{
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main()
{
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 40);

    insertAtBeginning(head, 5);

    display(head);

    return 0;
}
