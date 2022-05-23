#include<iostream>
using namespace std;

class node
{
    public:
    int value;
    node* prev;
    node* next;
    
    node (int val){
        value=val;
        prev=NULL;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n; 
    }
    head=n;
}

void insertAtTail(node* &head,int val){

    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        insertAtHead(head, val);
        return ;
    }
    while(temp->next != NULL){
        temp=temp->next;
      
    }
    temp->next=n;
    n->prev=temp;
}

void deleteAtHead(node* &head){ 
    node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
}

void deletion(node* &head, int pos){
    node* temp=head;
    int count=1;

    if(pos==1){
        deleteAtHead(head);
    }

    while(count != pos  && temp!=NULL){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

    delete temp;
}

void display(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
      
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtHead(head,6);
    display(head);
    deletion(head,3);
    display(head);
    deleteAtHead(head);
    display(head);
    deletion(head,1);
    display(head);



    return 0;
}