/*
 * Author:Mekan Klichov
 * Date: 08.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot perform POP operation." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int topElement() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot perform TOP operation." << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};