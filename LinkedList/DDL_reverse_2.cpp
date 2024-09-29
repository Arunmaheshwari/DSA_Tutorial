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
    void reverseDLL(Node* &head, Node* &tail){
        Node* curr = head;
        

        while(curr!=NULL){
            Node* nextptr = curr->next;
            curr->next = curr->prev;
            curr->prev = nextptr;
            curr = nextptr;
        }

        Node* new_head = tail;
        tail = head;
        head = new_head;
        

    }
    

};


int main(){
    LinkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);
    ll.display();
    ll.reverseDLL(ll.head, ll.tail);
    ll.display();
    return 0;
}