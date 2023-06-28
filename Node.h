#ifndef NODE_H
#define NODE_H

#include "Item.h"

#include <iostream>
using namespace std;

struct Node {
    Item item;       // Holds an item object
    Node* next;      // Pointer to the next node in the linked list
    string data; // Additional data (not used in this code snippet)
};

#endif // NODE_H
