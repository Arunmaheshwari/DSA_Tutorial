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

class Cll{
    public:
    Node* head;

    Cll(){
        head = NULL;
    }

    void insertAtStart(int val){
    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        new_node->next = head;  // curcular linked list
        return;
    }

    Node* tail = head;
    while(tail->next!=head){
        tail = tail->next;
    }

    tail->next = new_node;
    new_node->next = head;
    head = new_node;
}

void insertAtTail(int val){
    

    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        new_node->next = head;
        return;
    }
    Node* tail = head;
    while(tail->next!=head){
        tail = tail->next;
    }
    
    
    tail->next = new_node;
    new_node->next = head;
    
}
    void insertKposition(int val, int pos){
        Node* new_node = new Node(val);
        if(pos == 0){
            insertAtStart(val);
            return;
        }

        Node * temp = head;
        int current_pos = 1;
        while(current_pos!=pos-1){
            temp = temp->next;
            current_pos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;

    }
    void updateAtPosition(int val, int k){
        Node* temp = head;
        int count = 1;
        while(count!=k){
            temp = temp->next;
            count++;
        }
        temp->val = val;
    }

    void deleteAthead(){

        if(head == NULL){
            return;
        }
        Node* temp = head;
        Node* tail = head;
        while(tail->next!= head){
            tail = tail->next;
        }

        
        head = head->next;
        tail->next = head;
        free(temp);

        

    }

    void deleteAtk(int pos){
        if(head == NULL){
            return;
        }
        if(pos == 0){
            deleteAthead();
            return;
        }

        Node* prev = head;
        int curr_pos = 1;
        while(curr_pos!= pos-1){
            prev = prev->next;
            curr_pos++;
        }
        Node* temp = prev->next;
        prev->next = prev->next->next;
        free(temp);

    }

    void deleteAtend(){
        if(head == NULL){
            return;
        }

        Node* tail =head;
        
        while(tail->next->next != head){
            tail = tail->next;
        }

        Node* temp = tail->next;
        tail->next = head;
        free(temp);
        
    }

    void display(){
        Node * temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp!=head);
        cout<<endl;
        
        
       
    }

    void checkCurcular(){
        Node* temp = head;

        for(int i=0;i<12;i++){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    

};


int main(){

    Cll cl;
    // cl.insertAtStart(1);
    // cl.insertAtStart(2);
    // cl.insertAtStart(3);
    // cl.insertAtStart(4);
    // cl.insertAtStart(5);
    // cl.insertAtStart(6);
    // cl.display();

    cl.insertAtTail(1);
    cl.insertAtTail(2);
    cl.insertAtTail(3);
    cl.insertAtTail(4);
    cl.insertAtTail(5);
    cl.insertAtTail(6);
    cl.display();
    cl.insertKposition(8,3);
    cl.display();
    cl.updateAtPosition(9,3);
    cl.display();
    cl.deleteAthead();
    cl.display();
    cl.deleteAtend();
    cl.display();
    cl.deleteAtk(2);
    cl.display();

    return 0;
};