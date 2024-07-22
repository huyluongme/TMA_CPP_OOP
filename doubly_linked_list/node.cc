#include "node.h"

Node::Node(int data, Node* prev, Node* next) {
    this->data = data;
    this->prev = prev;
    this->next = next;
}

Node::~Node() {}

int Node::getData() { return this->data; }

Node* Node::getPrevNode() { return this->prev; }

Node* Node::getNextNode() { return this->next; }

void Node::setPrevNode(Node* prev) { this->prev = prev; }

void Node::setNextNode(Node* next) { this->next = next; }