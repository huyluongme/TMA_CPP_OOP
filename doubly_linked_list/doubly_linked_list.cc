#include <iostream>
#include "doubly_linked_list.h"

using namespace std;

DoublyLinkedList::DoublyLinkedList(){
    this->head = nullptr;
    this->tail = nullptr;
    this->totalNumberOfNodes = 0;
}

DoublyLinkedList::~DoublyLinkedList(){
    // Node* tmp = this->head;
    // while (tmp != nullptr)
    // {
    //     tmp = head->next;
    //     delete this->head;
    //     this->head = tmp;
    // }
    // delete this->head;
}

bool DoublyLinkedList::isEmpty() { return this->totalNumberOfNodes == 0; }

Node* DoublyLinkedList::search(int key) {
    Node* tmp = this->head;
    while(tmp){
        if (tmp->getData() == key) return tmp;
        tmp = tmp->getNextNode();
    }
    return nullptr;
}

void DoublyLinkedList::insertHead(int val) {
    Node* newNode = new Node(val, nullptr, nullptr);
    if(this->isEmpty()){
        this->head = newNode;
        this->tail = newNode;
    }
    else {
        this->head->setPrevNode(newNode);
        newNode->setNextNode(this->head);
        this->head = newNode;
    }
    this->totalNumberOfNodes++;
}

void DoublyLinkedList::insertTail(int val){
    Node *newNode = new Node(val, nullptr, nullptr);
    if(this->isEmpty()){
        this->head = newNode;
        this->tail = newNode;
        this->max_value = this->min_value = val;
    }
    else{
        this->tail->setNextNode(newNode);
        newNode->setPrevNode(this->tail);
        this->tail = newNode;
        this->max_value = this->max_value <
    }
    this->totalNumberOfNodes++;
}

void DoublyLinkedList::insertAfterKey(int val, int key){
    Node * searchNode = this->search(key);
    Node* newNode = new Node(val, searchNode, searchNode->getNextNode());
    searchNode->setNextNode(newNode);
    searchNode->getNextNode()->setPrevNode(newNode);
    this->totalNumberOfNodes++;
}

void DoublyLinkedList::deleteHead(){
    Node* tmp = this->head;
    this->head = this->head->getNextNode();
    this->head->setPrevNode(nullptr);
    delete tmp;
}

void DoublyLinkedList::deleteTail(){
    Node* tmp = this->tail;
    this->tail = this->tail->getPrevNode();
    this->tail->setNextNode(nullptr);
    delete tmp;
}

void DoublyLinkedList::deleteByKey(int key){
    if(key == this->head->getData()) this->deleteHead();
    else if(key == this->tail->getData()) this->deleteTail();
    else {
        Node* searchNode = this->search(key);
        searchNode->getPrevNode()->setNextNode(searchNode->getNextNode());
        searchNode->getNextNode()->setPrevNode(searchNode->getPrevNode());
        delete searchNode;
    }
}

void DoublyLinkedList::printForward() {
    Node* tmp = this->head;
    while (tmp)
    {
        cout << tmp->getData() << " ";
        tmp = tmp->getNextNode();
    }
    cout << endl;
}