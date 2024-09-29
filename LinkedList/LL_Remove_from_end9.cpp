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

void removeFromEnd(Node* &head, int k){
    Node* ptr1 = head;
    //Node* ptr2 = k + head;
    Node* ptr2 = head;
    
    int counter = k;
    while(k--){
        if(ptr2==NULL && k>0){
            return;
        }
        ptr2 = ptr2->next;
        
    }

    if(ptr2==NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }


    while(ptr1->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        
    }

    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    
    delete temp;
    
}


int main(){
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    //1>2>3>>4>5>null
    removeFromEnd(ll.head, 4);
    ll.display();
    
    // ll.display();
    
    // ll.display();

    return 0;
}