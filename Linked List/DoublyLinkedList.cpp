#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Node With Data " << this->data << " is Deleted " << endl;
    }
};
// Print all the nodes of the Doubly Linked List
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Print the length of the Doubly Linked List
int GetLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPos(Node *&head, Node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        InsertAtHead(head, tail, d);
        return;
    }
    int count = 1;
    Node *temp = head;
    while (count < pos - 1)
    {
        count++;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(head, tail, d);
        return;
    }
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void DeleteAtPos(Node *&head,Node *&tail,int pos){
    if(pos==1){
        Node *temp=head;
        head=temp->next;
        head->prev=NULL;
        delete temp;
        return ;
    }
    int count=1;
    Node *previous=NULL;
    Node *current=head;
    Node *temp=head;
    while(count<pos){
        previous=current;
        current=current->next;
        temp=temp->next;
        count++;
    }
    if(current->next==NULL){
        previous->next=current->next; 
        delete current;
        tail=previous;
        return ;
    }
    previous->next=current->next;
    current->next->prev=current->prev;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    InsertAtHead(head, tail, 20);
    print(head);
    InsertAtHead(head, tail, 30);
    print(head);
    InsertAtHead(head, tail, 40);
    print(head);
    InsertAtHead(head, tail, 50);
    print(head);

    // cout<<(*head).data<<endl;
    // and
    // cout<<head->data<<endl;
    // are same

    InsertAtTail(head, tail, 75);
    print(head);
    InsertAtPos(head, tail, 7, 39);
    print(head);
    DeleteAtPos(head,tail,1);
    print(head);
    // 40 30 20 10 75 39
    DeleteAtPos(head,tail,6);
    print(head);
    print(tail);
    return 0;
}