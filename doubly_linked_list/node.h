#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
private:
    int data;
    Node* prev;
    Node* next;
public:
    Node(int data, Node* prev, Node* next);
    ~Node();

    int     getData();
    Node*   getPrevNode();
    Node*   getNextNode();

    void    setPrevNode(Node* prev);
    void    setNextNode(Node* next);
};

#endif