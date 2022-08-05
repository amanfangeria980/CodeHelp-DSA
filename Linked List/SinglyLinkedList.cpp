#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtHead(Node *&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}


// or
// void InsertAtHead(Node **head,int d){
//     Node *temp =new Node(d);
//     temp->next=*(head);
//     *(head)=temp;
// } and pass address like this &head in InsertAtHead() function.
void Print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void InsertAtTail(Node *&tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    // tail=temp;
    tail=tail->next;
}

void InsertAtPos(Node *&head,Node *&tail,int pos,int d){
    if(pos==1){
        // InsertAtHead(head,d);
        return ;
    }
    Node *temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return ;
    }
    Node *NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
}

void DeleteAtPos(Node *&head,int pos){
    if(pos==1){
        //FOR FIRST
        Node *temp=head;
        head=head->next;
        delete temp;
        return ;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        delete curr;
    }
}
int main(){
    Node * node1=new Node(2);
    //2
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node *head=node1;
    Node *tail=node1;
    InsertAtHead(head,4);
    //4 2
    InsertAtHead(head,3);
    //3 4 2
    // Print(head);
    InsertAtTail(tail,5);
    //3 4 2 5
    // Print(head);
    // cout<<tail->data<<endl; //3
    // cout<<head->data<<endl; //5
    InsertAtPos(head,tail,3,10);
    //3 4 10 2 5
    Print(head);
    // cout<<endl;
    cout<<head->data<<endl; //3 
    cout<<tail->data<<endl; //5
    DeleteAtPos(head,1); //4 10 2 5
    DeleteAtPos(head,2); //4 2 5
    Print(head);
    return 0;  
}