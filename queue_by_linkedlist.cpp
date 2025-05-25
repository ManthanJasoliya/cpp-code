#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

class Queue{
    public:
    Node* front;
    Node* rear;
    Queue(){
        front = rear = NULL;
    }

    void enqueue(int value){
        Node* newnode = new Node(value);
        if(rear == NULL){
            front = rear = newnode;
            return;
        }
        rear -> next = newnode;
        rear = newnode;
    }

    void dequeue(){
        if(front == NULL){
            cout << "Queue is empty" << endl;
        }
        Node* temp = front;
        front = front -> next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
    }

    void display(){
        if(front == NULL){
            cout  << "Queue is empty !" << endl;
            return;
        }
        Node* temp = front;
        while(temp != NULL){
            cout << temp -> data << " " ;
            temp = temp -> next ;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    return 0;
}

