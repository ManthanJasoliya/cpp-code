#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int capacity;
    int* queue;
    int front;
    int rear;
    int size;
    
    Queue(int capacity){
        this -> capacity = capacity;
        this -> queue = new int[capacity];
        this -> front = 0;
        this -> rear = -1;
        this -> size = 0;
    }
    ~Queue(){
        delete[] queue;
    }

    void resize(){
        capacity *= 2;
        int* newarray = new int[capacity];
        for(int i = 0;i<size ; i++){
            newarray[i]=queue[(front+i)%(capacity/2)];
            delete queue;
            queue = newarray;
            front = 0;
            rear = size - 1;
        }
    }

    void enqueue(int value){
        if(size == capacity){
            resize();
        }
        rear = (rear+1)%capacity ;
        queue[rear]= value ;
        size++;
    }

    int dequeue(){
        if(size == 0){
            cout << "Queue is empty ! ,cannot dequeue" << endl;
            return 0;
        }
        int value = queue[front];
        front = (front + 1) % capacity;
        size--; 
        return value;
    }

     void display() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = 0; i < size; i++) {
            cout << queue[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue queue(10);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();
    queue.dequeue();
    queue.display();
    return 0;
}
