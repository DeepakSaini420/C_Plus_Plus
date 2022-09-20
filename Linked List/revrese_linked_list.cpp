#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
};

void insertHead(Node* &head,int data){
    Node *temp;
    if(head==NULL){
        temp = new Node(data);
        head = temp;
    }else{
        temp = new Node(data);
        temp->next=head;
        head = temp;
    }
}

void revrseLinkedList(Node* &head){
    Node *prev=NULL;
    Node *current = head;
    Node *temp;
    while(current!=NULL){
        temp = current->next;
        current->next = prev;

        prev = current;
        current = temp;
    }
    head = prev;
    return;
}

void printLL(Node *head){
    while(head){
        cout << head->data << "----->";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}

int main(){
    Node *head=NULL;
    insertHead(head,30);
    insertHead(head,25);
    insertHead(head,15);
    insertHead(head,10);
    insertHead(head,5);
    printLL(head);
    revrseLinkedList(head);
    printLL(head);
}