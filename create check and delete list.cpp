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

void createCycle(node *&head, int pos)
{
    node *temp = head;
    int count = 0;
    node *zemp;
    while (temp->next != NULL)
    {
        count++;
        if (count == pos)
        {
            zemp = temp;
        }
        temp = temp->next;
    }
    temp->next = zemp;
}

bool checkCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
}

void deleteCycle(node* &head){
    node* fast=head;
    node* slow=head;

    while(fast != NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            fast=head;
            break;
        }
    }
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
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
    createCycle(head, 3);
    cout << checkCycle(head) << endl;
    deleteCycle(head);
    display(head);

    return 0;
}
