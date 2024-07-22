#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "node.h"

class DoublyLinkedList
{
private:
    Node* head;
    Node* tail;
    int totalNumberOfNodes;
    int max_value, min_value;
public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    bool isEmpty();
    Node* search(int key);

    void insertHead(int val);
    void insertTail(int val);
    void insertAfterKey(int val, int key);
    void deleteHead();
    void deleteTail();
    void deleteByKey(int key);
    void printForward();
};

#endif