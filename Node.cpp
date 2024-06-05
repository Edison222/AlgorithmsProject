#include <iostream>
#include <cstdlib>
#include "Node.h"


using namespace std;

class Node{

 public:

    int data;
    Node* next;
    Node* prev;

    Node(int val){

        data = val;
        next = nullptr;
        prev = nullptr;
    };
};
