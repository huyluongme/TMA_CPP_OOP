#include <iostream>
#include "doubly_linked_list.h"

using namespace std;

int main(){
    DoublyLinkedList *pDDL = new DoublyLinkedList();
    pDDL->insertTail(5);
    pDDL->insertTail(15);
    pDDL->insertTail(10);
    pDDL->insertTail(7);

    pDDL->printForward();

    pDDL->deleteByKey(15);

    pDDL->printForward();

    pDDL->deleteByKey(7);

    pDDL->printForward();

    return 0;
}