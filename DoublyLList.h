#ifndef DOUBLYLLIST_H
#define DOUBLYLLIST_H

#include "Node.h"
#include <iostream>

class DoublyLList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLList();
    void AddToTail(int n);
    void PrintElements();
    void PrintReverse();
};

#endif