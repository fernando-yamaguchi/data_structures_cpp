#ifndef DATA_STRUCTURES_CPP_LINKED_LIST_LINKED_LIST_H
#define DATA_STRUCTURES_CPP_LINKED_LIST_LINKED_LIST_H

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void append(int data);
    void display();

private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
};

#endif // DATA_STRUCTURES_CPP_LINKED_LIST_LINKED_LIST_H
