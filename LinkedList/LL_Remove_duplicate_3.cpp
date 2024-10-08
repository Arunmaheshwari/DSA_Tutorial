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

void deleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp = curr_node->next; // this is the node to be deleted
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}
void deleteDuplicate(Node* &head){
    Node * curr_node = head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val == curr_node->next->val){
            // delete curr_next
            Node* temp = curr_node->next; // node to be deleted
            curr_node->next = curr_node->next->next;
            free(temp);

        }
        // this loop ends when current node and next node values are different
        // or linked list ends
        curr_node = curr_node->next;
    }
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
    deleteDuplicate(ll.head);
    ll.display();

    return 0;
}