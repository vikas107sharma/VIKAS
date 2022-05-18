#include<iostream>
using namespace std;

class node
{
    public:
    int Data;
    node* Next;

    node(int val){
        Data= val;
        Next = NULL ;

    }

};

void insertAtHead(node* &head,int val ){
    node* n= new node(val);
    n->Next=head;
    head=n;
}

void insertAtTail( node* &head, int val ){
    node* n= new node(val);

    if (head== NULL){
        head=n;
        return;
    }

    node* temp= head;
    while (temp->Next != NULL)
    {
        temp= temp->Next;
    }
    temp->Next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->Data<<" -> ";
        temp=temp->Next;
    }
    cout<<"NULL"<<endl;
}

void deletion(node*    &head, int val){
    node* temp=head;
    while (temp->Next->Data!= val)
    {
        temp=temp->Next;
    }
        node* todelete=temp->Next;
        temp->Next=temp->Next->Next;
        delete todelete;       
}

int main ()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    display(head);
}