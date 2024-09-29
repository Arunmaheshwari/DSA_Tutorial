#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
class linkedlist{
    public:
    Node* head;

    linkedlist(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node* new_node = new Node(value);
        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }

        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

Node* reverseLL(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    while(currptr!=NULL){
        Node* next_ptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = next_ptr;
    }

    Node* new_head = prevptr;
    return new_head;
}

Node* reverseKll(Node* &head,int k){
    Node* prevptr = NULL;
    Node* currptr = head;

    int counter = 0; // for counting first k nodes
    while(currptr!=NULL && counter<k){             // reversing first k nodes
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;

    }
    // currptr will give us (k+1)th node
    if(currptr!=NULL){

        Node* new_head = reverseKll(currptr,k);  // recursive call
        head->next = new_head;
    }

    return prevptr; // prevptr will give the new_head of connected linked lists
}

int main(){
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.display();
    ll.head = reverseKll(ll.head,2);
    ll.display();
    
    // ll.display();

    return 0;
}