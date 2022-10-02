#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        n -> next = n;
        head = n;
        return;

    }

    Node* temp = head;

     while(temp -> next != head){
        temp = temp -> next;
    }

    temp -> next = n;
    n -> next = head;
    head = n;

}
void insertAtTail(Node* &head, int val){

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;

    while(temp -> next != head){
        temp = temp -> next;
    }

    temp -> next = n;
    n -> next = head;
}

void display(Node* head){
    Node* temp = head;
    cout << temp -> data <<" ";
    while(temp -> next != head){
        temp = temp-> next;
        cout << temp -> data <<" ";

    }
    cout<< endl;
}
void deleteAtHead(Node* &head){
    Node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;

    }
    Node* todelete = head;
    temp -> next = head -> next;
    head = head -> next;

    delete todelete;

}
void deleteion(Node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count != pos - 1){
        temp = temp -> next;
        count++;
    }
    Node* todelete = temp -> next;
    temp->next = temp-> next-> next;

    delete todelete;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);
    deleteion(head, 5);
    display(head);
    deleteion(head, 1);
    display(head);
}
