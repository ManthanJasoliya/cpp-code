#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prv;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> prv = NULL;
        this -> next = NULL;
    }
};
void print(Node* &head){
    Node* temp = head ;
    while(temp -> next != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

int insertHEAD(Node* head, int data)
{
    Node* temp = new Node(data);
    temp -> next = head ;
    head -> prv = temp;
    head = temp;
}
int main(){
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;


    insertHEAD(head,9);
    print(head);


}