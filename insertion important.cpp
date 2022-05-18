 #include<iostream>
using namespace std;

class node
{
    public:
    int value;
    node* next;

    node(int val){
        value = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n= new node(val );
    n->next=head;  
    head=n;
}

void insertAtTail(node* &head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while( temp->next != NULL){
        temp= temp->next;
    }
    temp->next=n;

}


void display(node* head){
    node* temp=head;
    while( temp != NULL){
    cout<< temp->value<<endl;
    temp=temp->next;
    }
}

int main()
{
    node* head=NULL;
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtTail(head,8);
    insertAtTail(head,9);
    insertAtTail(head,10);
    display(head);
    
return 0;
}