#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next =  NULL;
    }
};

void insertionHEAD(Node* &head , int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp ;
}

void insertionTAIL(Node* &tail , int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

Node* reverse(Node* &head){
    Node* last = NULL;
    Node* start = head;

    while(start != NULL){
        Node* nextnode = start -> next;
        start -> next = last;
        last = start;
        start = nextnode;
    }
    return last;
}

void insertionsorted(Node* &head,int data){
    Node* newnode = new Node(data);
    if(head == NULL || head -> data >= newnode-> data){
        newnode -> next = head;
        head = newnode;
        return;
    }
    Node* current = head;
    while(current-> next != NULL && current -> next -> data < newnode -> data){
        current = current-> next;
    }
    newnode->next = current-> next;
    current -> next = newnode;  
}

int print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertionHEAD(head , 15);
    insertionHEAD(head , 20);
    print(head);

    head = reverse(head);
    print(head);

    insertionsorted(head,55);
    insertionsorted(head,87);
    insertionsorted(head,5);

    cout << "shorted list: " ;
    print(head);
    return 0;
}