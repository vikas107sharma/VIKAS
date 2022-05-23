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

int length(node *&head)
{
    int count = 1;
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void kappend(node *&head, int pos)
{
    int l = length(head);
    node *temp = head;
    node *zemp = head;
    int k = l - pos - 1;

    if(pos>l){
        return;
    }
    
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (k > 0)
        {
            k--;
            zemp = zemp->next;
        }
    }
    node *newhead = head;
    newhead = zemp->next;
    zemp->next = NULL;
    temp->next = head;
    head = newhead;
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

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    cout << length(head) << endl;
    kappend(head, 3);
    display(head);

    return 0;
}