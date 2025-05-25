#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int* stack ;
    int capacity ;
    int top = -1;

    void resize(){
        capacity *=2;
        int* newarray = new int[capacity];
        for(int i=0; i<= top ;i++){
            newarray[i] = stack[i];
        }
        delete stack;
        stack = newarray;
    }

    Stack(int capacity){
        this -> capacity = capacity;
        this -> top = -1;
        this -> stack = new int[capacity];
    }

    ~Stack(){
        delete[] stack;
    }

    int push(int value){
        if(top+1 == capacity){
            resize();
        }
        stack[++top] = value;
    }

    int pop(){
        if(isempty()){
            cout << "it's empty can not pop!" << endl;
            return 0;
        }
        return stack[top--];
    }

    bool isempty(){
        return top == -1;
    }

    void peek(){
        cout << "Top of the stack : " << stack[top] << endl;
    }

    void display(){
        for(int i =0 ; i <= top ; i++){
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Stack stack(10);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();
    stack.peek();
    return 0;
}
