#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node *next;

    node(int val)
    {
        value = val;
        next = NULL;
    }
};

node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* temp;

    while (curr != NULL){
        temp=curr->next;
        curr->next=prev;
        prev= curr;
        curr=temp;

    }
    head=prev;
    return head;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout<< "NULL"<< endl;
}

// agar first node delete krna ho
void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->next;

    delete toDelete;
}

void deletion(node *&head, int val)
{
    // corner cases 1. 2.
    // 1. agar linkedList khali hai
    if (head == NULL)
    {
        return;
    }
    // 2. agar linkedList me ek hi node present hai
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return; // return nhi kiya to niche ka bhi chalega aur error throw karega
    }

    int data = val;
    node *temp = head;
    while (temp->next->value != data)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    reverse(head);
    display(head);

    return 0;
}
