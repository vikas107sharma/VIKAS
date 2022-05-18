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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtPosition(node* &head, int val, int pos){
    node* n=new node(val);
    node* temp=head;
    node* zemp;
    if(pos==1){
        n->next=head;
        head=n;
        return ;
    }
    int count=2;
   
    while( pos != count ){
        temp=temp->next;
        count++;
    }
    
    zemp=temp->next;
    temp->next=n;
    n->next=zemp;

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


void display(node* &head){
    node* temp=head;
    while( temp != NULL){
    cout<< temp->value<<endl;
    temp=temp->next;
    }
}


int main()
{
    node* head=NULL;
    
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    insertAtPosition(head, 7,1);

    display(head);
return 0;
}
