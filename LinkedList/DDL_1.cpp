#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
        
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;

    LinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }

    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){                          
            head = new_node;
            tail = new_node;
            return;
        }
        // We can also write like this
        // if(head==NULL){                          
        //     head = new_node;
        //     tail = new_node;
        // }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;

        return;
    }

    void insertAtkth(int val, int k){
        Node* new_node = new Node(val);
        Node* temp = head;

        // assuming k is less or equal to length of doubly linked list

        int counter = 1;
        while(counter<(k-1)){
            temp = temp->next;
            counter++;

        }

        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return;
    }

    void deleteFromHead(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;

        }else{
            head->prev = NULL;
        }
        
        free(temp);
        return;
    }

    void deleteFromEnd(){
        if(tail==NULL){
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head = NULL;
        }else{
            tail->next = NULL;

        }
        free(temp);
    }

    void deleteAtPos(int k){
        if(head == NULL){
            return;
        }

        Node* temp = head;
        int counter;
        while(counter<k){
            temp = temp->next;
            counter++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
};


int main(){
    // Node* new_node = new Node(4);

    // LinkedList ll;
    // ll.head = new_node;
    // ll.tail = new_node;
    // cout<<ll.head->val<<endl;

    // LinkedList ll;
    // ll.insertAtStart(3);
    // ll.insertAtStart(2);
    // ll.insertAtStart(1);
    // ll.display();
    
    LinkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.display();

    ll.insertAtkth(4,2);
    ll.display();
    //ll.deleteFromHead();
    ll.display();
    //ll.deleteFromEnd();
    ll.deleteAtPos(2);
    ll.display();
    return 0;
}