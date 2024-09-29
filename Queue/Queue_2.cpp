#include<iostream>
#include<vector>
using namespace std;

// Implementation of Queue using Array

class Queue{
    int front;
    int back;
    vector<int> v;
    public:
    Queue(){
        this->front = -1;
        this->back = -1;
    }

    void enqueue(int data){
        this->v.push_back(data);
        this->back++;
        if(this->back == 0) this->front = 0;
    }

    void dequeue(){
        if(this->front == this->back){
            this->front = -1;
            this->back = -1;
            this->v.clear();

        }else{
            this->front++;
        }
    }

    int getFront(){
        if(this->front == -1) return -1;
        return this->v[this->front];
    }

    bool isEmpty(){
        return this->front == -1;
    }
  
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    //cout<<q.getSize()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(23);
    //cout<<q.getSize()<<endl;

    while(not q.isEmpty()){
        cout<<q.getFront()<<" ";
        q.dequeue();
    }



    return 0;

}