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
int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp!=NULL){
        length++;
        temp = temp->next;

    }
    return length;
}

Node* moveHead(Node* head, int k){
    Node* ptr = head;
    while(k--){
        ptr = ptr->next;

    }
    return ptr;
}
Node* intersectionOfLL(Node* head1, Node* head2){
    // Step 1 = calculate lengths of both linked list
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    //step 2: find difference k between linkedlist and move longer linkedlist ptr by k steps
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){
        int k = l1-l2;
        ptr1 = moveHead(head1,k);
        ptr2 = head2;
    }else{
        int k = l2-l1;
        ptr1 = head1;
        ptr2 = moveHead(head2,k);
    }

    // step3: compare ptr1 and ptr2 nodes
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
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
    linkedlist ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    
    ll2.head->next->next = ll.head->next->next->next->next;
    ll2.display();
    //6>7>5>null

    Node* intersaction = intersectionOfLL(ll.head, ll2.head);
    if(intersaction){
        cout<<intersaction->val<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    // ll.display();
    
    // ll.display();
    
    // ll.display();

    return 0;
}