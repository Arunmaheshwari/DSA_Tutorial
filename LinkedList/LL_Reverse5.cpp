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

Node* recursiveReverse(Node* &head){

    //base case
    if(head == NULL || head->next  == NULL){
        return head;
    }


    //recursive case
    Node* new_head = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}

int main(){
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(1);
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.display();
    ll.head = reverseLL (ll.head);
    ll.display();
    
    // ll.display();

    return 0;
}